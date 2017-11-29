const char HTML_INDEX[] PROGMEM = R"=====(
  <!DOCTYPE html>
  <html>
  <head>
    <meta charset="utf-8">
    <title>Control</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="shortcut icon" href="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAAPFBMVEUAAACA1VWR21qQ2liR3FqR3FqS3VuR3VqR3VuR3VqO21mS21uS3FqS3FqS21uJ2GKQ21qR3FuR3FoAAAB/3Gu7AAAAEnRSTlMABoA3kPBwz8i5Kzioxg4NVcU3uEJHAAAAAWJLR0QAiAUdSAAAAAlwSFlzAAAN1wAADdcBQiibeAAAAAd0SU1FB+EFEhcEM+HpYwQAAABYSURBVBjThY/JDsAgCESt4lpX/v9jLQZJ6qF9t3khAyj1xXUKbQ4BVowDwqOYgExkkW4iY6lPaF06RqM8YItOuRbMaz6xjbsusDAW/drplBg47jP696cXE8bPA1eUDeK2AAAAJXRFWHRkYXRlOmNyZWF0ZQAyMDE3LTA1LTE4VDIzOjA0OjUxKzAyOjAwxE59ewAAACV0RVh0ZGF0ZTptb2RpZnkAMjAxNy0wNS0xOFQyMzowNDo1MSswMjowMLUTxccAAAAZdEVYdFNvZnR3YXJlAHd3dy5pbmtzY2FwZS5vcmeb7jwaAAAAAElFTkSuQmCC"
    />
    <link rel="stylesheet" href="/css/normalize.css">
    <link rel="stylesheet" href="/css/style.css">

    <script src="/js/zepto.js"></script>
    <script src="/js/slider.js"></script>
    <script src="/js/controls.js"></script>
  </head>
  <body onload="javascript:start();">
    <div>
      <h4><div id="mainHeader">Control</div> <span id="conStatus" class="label">Offline</span></h4></div>
    <hr />
    <div class="container">
      <div id="row" class="row u-full-width">
      </div>
    </div>
  </body>
  </html>
)=====";
