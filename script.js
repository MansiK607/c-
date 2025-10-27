(function () {
  const navToggleButton = document.getElementById("navToggle");
  const primaryNav = document.getElementById("primaryNav");
  const contactForm = document.getElementById("contactForm");
  const formStatus = document.getElementById("formStatus");
  const yearEl = document.getElementById("year");

  if (yearEl) {
    yearEl.textContent = String(new Date().getFullYear());
  }

  if (navToggleButton && primaryNav) {
    navToggleButton.addEventListener("click", () => {
      const isOpen = primaryNav.classList.toggle("open");
      navToggleButton.setAttribute("aria-expanded", String(isOpen));
    });

    // Close menu when a link is clicked (mobile UX nicety)
    primaryNav.addEventListener("click", (event) => {
      const target = event.target;
      if (target instanceof HTMLAnchorElement) {
        primaryNav.classList.remove("open");
        navToggleButton.setAttribute("aria-expanded", "false");
      }
    });
  }

  if (contactForm && formStatus) {
    contactForm.addEventListener("submit", (event) => {
      event.preventDefault();

      const formData = new FormData(contactForm);
      const name = String(formData.get("name") || "").trim();
      const email = String(formData.get("email") || "").trim();
      const message = String(formData.get("message") || "").trim();

      const errors = [];
      if (!name) errors.push("Name is required.");
      if (!email || !/^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(email)) errors.push("Valid email is required.");
      if (!message) errors.push("Message is required.");

      if (errors.length > 0) {
        formStatus.textContent = errors.join(" ");
        formStatus.style.color = "#fca5a5"; // soft red
        return;
      }

      // In a real app, send this to your backend here
      console.log({ name, email, message });

      formStatus.textContent = "Thanks! Your message has been recorded locally.";
      formStatus.style.color = "#86efac"; // soft green
      contactForm.reset();
    });
  }
})();