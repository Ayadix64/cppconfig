# CPPCONFIG
<dev align="center">
    <h5> A very simpel C++ config languge </h5>
</dev>
<ln>


this is my *very* **very** simpel config languge that i used in my Chat.Locale project,

is a header only; nicely;

sadly, it is just a string config, may i change this at some point ,
this is the general structet of the config file
``` conf
cool_config1 : "Hello evry bady" # check this cool coment; 
# A other very smart comment her

booring_config : "0xffffff" #  sadly, this reads it as a string, you can change it thogh ith std::stio
```

you can then use it as well

``` cpp

readConf(config_file_name, config_name,string_to_read_to); // this return 1 if it never found the config file or it dosnt fond the config
writeConf(config_file_name, config_name, config_data);     // the return 1 if four some reasen it didnt fonde the config file and trai to creat it znd it faile
IsTherConfig(config_file_name, config_name);               // this returns true if it finde that config at config file and false if never found it or the file dosnt exest
```



soo, how was your day?
