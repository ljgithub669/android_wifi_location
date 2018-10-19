## 一、美团总部AP定位
[reference](https://blog.csdn.net/PINGER0077/article/details/79482238)

**核心代码**

```
WifiManager wm = (WifiManager) getSystemService(Context.WIFI_SERVICE);

wm.startScan();  //开始扫描AP//等待一段时间，时间可长可短

List<ScanResult> results = wm.getScanResults();  //拿到扫描的结果

Collections.sort(results,this);  //this是个Comparator，按照level排序//去掉非sankuai的SSID//在UI线程中，显示到界面上int max=Math.min(30,results.size());for(int i=0;i<max;i++) {

    ScanResult one = results.get(i);

    text1.append("\n"+one.BSSID+"\t\t"+one.level);

}
```
