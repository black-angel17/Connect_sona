document.addEventListener("DOMContentLoaded", function () {
    const imageContainer = document.querySelector(".image-container");
    const loginForm = document.querySelector(".login-form");

    // Function to toggle the login form visibility
    function toggleLoginForm() {
        loginForm.style.display = (loginForm.style.display === "none") ? "block" : "none";
    }

    // Click on the blurred image to toggle the login form
    imageContainer.addEventListener("click", toggleLoginForm);

    // You can also trigger the login form on blur (when user clicks elsewhere on the page)
    document.addEventListener("click", function (event) {
        if (!imageContainer.contains(event.target)) {
            loginForm.style.display = "none";
        }
    });
});
