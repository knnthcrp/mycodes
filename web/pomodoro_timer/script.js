// Set the starting time to 25 minutes (in seconds)
let timeLeft = 25 * 60; // 25 minutes × 60 seconds = 1500 seconds

// These will help control the timer
let timerId = null;   // this will store the timer function
let isRunning = false; // to check if the timer is running or not

// Get the HTML elements by their IDs
const timerDisplay = document.getElementById("timer"); // shows the countdown
const startBtn = document.getElementById("start");     // start button
const pauseBtn = document.getElementById("pause");     // pause button
const resetBtn = document.getElementById("reset");     // reset button

// 🕒 This function updates the timer text on screen
function updateTimer() {
  const minutes = Math.floor(timeLeft / 60); // get the full minutes
  const seconds = timeLeft % 60;             // get the leftover seconds

  // show it in "MM:SS" format (like 25:00)
  timerDisplay.textContent = 
    `${String(minutes).padStart(2, '0')}:${String(seconds).padStart(2, '0')}`;
}

// ▶️ This function starts the countdown
function startTimer() {
  // if it’s already running, don’t start another one
  if (isRunning) return;

  isRunning = true; // mark as running

  // run this function every second
  timerId = setInterval(() => {
    timeLeft--;     // decrease time by 1 second
    updateTimer();  // update what’s shown on screen

    // if timer reaches 0
    if (timeLeft <= 0) {
      clearInterval(timerId); // stop the timer
      isRunning = false;      // mark as not running
      alert("Time’s up! Take a break 🍵"); // show a message
    }
  }, 1000); // 1000 milliseconds = 1 second
}

// ⏸ This function pauses the timer
function pauseTimer() {
  clearInterval(timerId); // stop the timer from counting
  isRunning = false;      // mark as not running
}

// 🔄 This function resets everything back to 25:00
function resetTimer() {
  clearInterval(timerId); // stop any running timer
  isRunning = false;      // mark as not running
  timeLeft = 25 * 60;     // go back to 25 minutes
  updateTimer();          // show 25:00 again]
  document.getElementById("timer").innerHTML = "may chance pa bang <br>bumalik sa dati?";
}

// 🖱 Add event listeners (connect buttons to their actions)
startBtn.addEventListener("click", startTimer);
pauseBtn.addEventListener("click", pauseTimer);
resetBtn.addEventListener("click", resetTimer);

// show the initial time when the page loads
updateTimer();
