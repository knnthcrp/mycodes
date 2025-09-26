document.querySelector('#push').onclick = function () {

    const taskInput = document.querySelector('#newtask input');
    const taskValue = taskInput.value.trim();

    if (taskValue.length == 0) {
        alert("Please Enter a Task");
    } else {
        // Alert if task includes the word "study"
        if (taskValue.toLowerCase().includes("study")) {
            alert("DI MO NAMAN GAGAWIN");
        }

        // Add task to list
        document.querySelector('#tasks').innerHTML += `
        <div class="tasks">
            <span id="taskname">
                ${taskValue}
            </span>        
            <button class="delete">
                <i class="fa-solid fa-minus"></i>
            </button>
        </div>
        `;

        // Clear the input
        taskInput.value = "";

        // Handle delete buttons
        var current_tasks = document.querySelectorAll(".delete");
        for (var i = 0; i < current_tasks.length; i++) {
            current_tasks[i].onclick = function () {
                this.parentNode.remove();
            }
        }

        // Handle task completion toggle
        var tasks = document.querySelectorAll(".tasks");
        for (var i = 0; i < tasks.length; i++) {
            tasks[i].onclick = function () {
                this.classList.toggle('completed');
            }
        }
    }
};
