var userData = {
  firstName: "Harsh",
  lastName: "Mittal",
  role: "Admin",
  loginCount: 4554,
  facebookSignedIn: true,
  courseList: [],
  buyCourse: function (courseName) {
    this.courseList.push(courseName);
  },
  getCourseCount: function () {
    return `${this.firstName} is enrolled in total of ${this.courseList.length} courses.`;
  },
};

var courseList = true;

console.log("Hello" + " " + userData.firstName);

console.log(userData.getCourseCount());
userData.buyCourse("React js course");

console.log(userData.getCourseCount());
