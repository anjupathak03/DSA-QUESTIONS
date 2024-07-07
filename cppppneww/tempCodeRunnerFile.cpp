nt mind(string arr[]){
    for(int i=0; i<size; i++){
   int hours = stoi(arr[i].substr(0,2));
   int mins = stoi(arr[i].substr(3,2));
   int time = hours*60+mins;
  ans[i]=time;
  }
    sort(ans, ans+size);
    finddiff(ans);
     
 return 0;