// Get current time with AM/PM format
function getTime() {
    var ap = "";
    var d = new Date();
    var hour = d.getHours();
    if (hour < 12) {
        ap = "AM";
    } else {
        ap = "PM";
    }

    if (hour == 0) {
        hour = 12;
    }

    if (hour > 12) {
        hour = hour - 12;
    }

    var minute = d.getMinutes();
    minute = minute + "";

    if (minute.length == 1) {
        minute = "0" + minute;
    }

    var seconds = d.getSeconds();
    seconds = seconds + "";
    if (seconds.length == 1) {
        seconds = "0" + seconds;
    }

    return [hour, minute, seconds, ap];
};

var time = [];
 time = getTime();

 $('#currentTime').text('Updated at ' + time[0] + ":" + time[1] + " " + time[3]);
