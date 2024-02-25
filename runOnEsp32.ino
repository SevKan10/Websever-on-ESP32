#include <WiFi.h>
#include <ESPAsyncWebServer.h>

const char *ssid = "MINH KHA";
const char *password = "0855508877";

AsyncWebServer server(80);

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", R"html(
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Control Deivce</title>
    <style>
        .on {
            width: 150px;
            height: 40px;
            font-size: 21px;
            color: #FFF;
            background-color: #4caf50;
            border-radius: 10px;
        }

        .off {
            width: 150px;
            height: 40px;
            font-size: 21px;
            color: #FFF;
            background-color: #f44336;
            border-radius: 10px;
        }
    </style>
</head>

<body>
    <table align="center">
        <tr>
            <td><a href='/On1'><button class='on'>Turn On 1</button></a>
            <td>
            <td><a href='/Off1'><button class='off'>Turn Off 1</button></a>
            <td>
        <tr>
        <tr>
            <td><a href='/On2'><button class='on'>Turn On 2</button></a>
            <td>
            <td><a href='/Off2'><button class='off'>Turn Off 2</button></a>
            <td>
        <tr>
        <tr>
            <td><a href='/On3'><button class='on'>Turn On 3</button></a>
            <td>
            <td><a href='/Off3'><button class='off'>Turn Off 3</button></a>
            <td>
        <tr>
        <tr>
            <td><a href='/On4'><button class='on'>Turn On 4</button></a>
            <td>
            <td><a href='/Off4'><button class='off'>Turn Off 4</button></a>
            <td>
        <tr>
        <tr>
            <td><a href='/On5'><button class='on'>Turn On 5</button></a>
            <td>
            <td><a href='/Off5'><button class='off'>Turn Off 5</button></a>
            <td>
        <tr>
        <tr>
            <td><a href='/On6'><button class='on'>Turn On 6</button></a>
            <td>
            <td><a href='/Off6'><button class='off'>Turn Off 6</button></a>
            <td>
        <tr>
        <tr>
            <td><a href='/On7'><button class='on'>Turn On 7</button></a>
            <td>
            <td><a href='/Off7'><button class='off'>Turn Off 7</button></a>
            <td>
        <tr>
        <tr>
            <td><a href='/On8'><button class='on'>Turn On 8</button></a>
            <td>
            <td><a href='/Off8'><button class='off'>Turn Off 8</button></a>
            <td>
        <tr>
        <tr>
        </tr>
    </table>
    <br>
    <table align="center">
        <tr>
            <td>
                <label for="device">Choose Device:</label>
                <select name="device" id="device">
                    <option value="1">1</option>
                    <option value="2">2</option>
                    <option value="3">3</option>
                    <option value="4">4</option>
                    <option value="5">5</option>
                    <option value="6">6</option>
                    <option value="7">7</option>
                    <option value="8">8</option>
                </select>
            </td>
            <td>
                <label for="weekday">Choose Day Of Week:</label>
                <select name="weekday" id="weekday">
                    <option value="Monday">Monday</option>
                    <option value="Tuesday">Tuesday</option>
                    <option value="Wednesday">Wednesday</option>
                    <option value="Thursday">Thursday</option>
                    <option value="Friday">Friday</option>
                    <option value="Saturday">Saturday</option>
                    <option value="Sunday">Sunday</option>
                </select>
            </td>
            <td>
                <label for="time">Choose Time:</label>
                <select name="hour" id="hour">
                    <option value="0">0</option>
                    <option value="1">1</option>
                    <option value="2">2</option>
                    <option value="3">3</option>
                    <option value="4">4</option>
                    <option value="5">5</option>
                    <option value="6">6</option>
                    <option value="7">7</option>
                    <option value="8">8</option>
                    <option value="9">9</option>
                    <option value="10">10</option>
                    <option value="11">11</option>
                    <option value="12">12</option>
                    <option value="13">13</option>
                    <option value="14">14</option>
                    <option value="15">15</option>
                    <option value="16">16</option>
                    <option value="17">17</option>
                    <option value="18">18</option>
                    <option value="19">19</option>
                    <option value="20">20</option>
                    <option value="21">21</option>
                    <option value="22">22</option>
                    <option value="23">23</option>
                </select>
                <label for="time">:</label>
                <select name="minute" id="minute">
                    <option value="0">0</option>
                    <option value="1">1</option>
                    <option value="2">2</option>
                    <option value="3">3</option>
                    <option value="4">4</option>
                    <option value="5">5</option>
                    <option value="6">6</option>
                    <option value="7">7</option>
                    <option value="8">8</option>
                    <option value="9">9</option>
                    <option value="10">10</option>
                    <option value="11">11</option>
                    <option value="12">12</option>
                    <option value="13">13</option>
                    <option value="14">14</option>
                    <option value="15">15</option>
                    <option value="16">16</option>
                    <option value="17">17</option>
                    <option value="18">18</option>
                    <option value="19">19</option>
                    <option value="20">20</option>
                    <option value="21">21</option>
                    <option value="22">22</option>
                    <option value="23">23</option>
                    <option value="24">24</option>
                    <option value="25">25</option>
                    <option value="26">26</option>
                    <option value="27">27</option>
                    <option value="28">28</option>
                    <option value="29">29</option>
                    <option value="30">30</option>
                    <option value="31">32</option>
                    <option value="33">33</option>
                    <option value="34">34</option>
                    <option value="35">35</option>
                    <option value="36">36</option>
                    <option value="37">37</option>
                    <option value="38">38</option>
                    <option value="39">39</option>
                    <option value="40">40</option>
                    <option value="41">41</option>
                    <option value="42">42</option>
                    <option value="43">43</option>
                    <option value="44">44</option>
                    <option value="45">45</option>
                    <option value="46">46</option>
                    <option value="47">47</option>
                    <option value="48">48</option>
                    <option value="49">49</option>
                    <option value="50">50</option>
                    <option value="51">51</option>
                    <option value="52">52</option>
                    <option value="53">53</option>
                    <option value="54">54</option>
                    <option value="55">55</option>
                    <option value="56">56</option>
                    <option value="57">57</option>
                    <option value="58">58</option>
                    <option value="59">59</option>
                </select>
            </td>
            <td>
                <input type="button" value="Submit" onclick="checkDangky()">
            </td>
        </tr>
    </table>

    <div id="ketqua"></div>

    <script>
        function checkDangky() {
            var device = document.getElementById("device").value;
            var weekday = document.getElementById("weekday").value;
            var hour = document.getElementById("hour").value;
            var minute = document.getElementById("minute").value;
            console.log('Entered information is:\n' +
            'Device: ' + device + '\nDay: ' + weekday + '\nTime: ' + hour + ':' + minute);
    
            sendToESP(device, weekday, hour, minute);
        }
    
        function sendToESP(device, weekday, hour, minute) {
            var xhr = new XMLHttpRequest();
            var url = "http://192.168.1.4/process_data?device=" + device + "&weekday=" + weekday + "&hour=" + hour + "&minute=" + minute;
    
            xhr.open("GET", url, true);
            xhr.send();
        }
    </script>

</body>

</html>
    )html");
  });

  server.on("/process_data", HTTP_GET, [](AsyncWebServerRequest *request) {
    String device = request->arg("device");
    String weekday = request->arg("weekday");
    String hour = request->arg("hour");
    String minute = request->arg("minute");
    String data = ".," + device + "," + weekday + "," + hour + "," + ":" + minute + ",.";
    Serial.println(data);
  });

  server.begin();
}

void loop() {
}
