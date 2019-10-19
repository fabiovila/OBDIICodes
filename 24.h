char *codes[][2] = { {"P0000/SAE","Reserved"}
,{"P0001","Fuel Volume Regulator Control Circuit/Open"}
,{"P0002","Fuel Volume Regulator Control Circuit Range/Performance"}
,{"P0003","Fuel Volume Regulator Control Circuit Low"}
,{"P0004","Fuel Volume Regulator Control Circuit High"}
,{"P0005","Fuel Shutoff Valve A Control Circuit/Open"}
,{"P0006","Fuel Shutoff Valve A Control Circuit Low"}
,{"P0007","Fuel Shutoff Valve A Control Circuit High"}
,{"P0008","Engine Positions System Performance Bank 1"}
,{"P0009","Engine Position System Performance Bank 2"}
,{"P000A","A Camshaft Position Slow Response Bank 1"}
,{"P000B","B Camshaft Position Slow Response Bank 1"}
,{"P000C","A Camshaft Position Slow Response Bank 2"}
,{"P000D","B Camshaft Position Slow Response Bank 2"}
,{"P000E","Fuel Volume Regulator Control Exceeded Learning Limit"}
,{"P000F","Fuel System Over Pressure Relief Valve Activated"}
,{"P0010","A Camshaft Position Actuator Circuit (Bank 1)"}
,{"P0011","A Camshaft Position - Timing Over-Advanced or System Performance (Bank 1)"}
,{"P0012","A Camshaft Position - Timing Over-Retarded (Bank 1)"}
,{"P0013","B Camshaft Position - Actuator Circuit (Bank 1)"}
,{"P0014","B Camshaft Position - Timing Over-Advanced or System Performance (Bank 1)"}
,{"P0015","B Camshaft Position -Timing Over-Retarded (Bank 1)"}
,{"P0016","Crankshaft Position - Camshaft Position Correlation (Bank 1 Sensor A)"}
,{"P0017","Crankshaft Position - Camshaft Position Correlation (Bank 1 Sensor B)"}
,{"P0018","Crankshaft Position - Camshaft Position Correlation (Bank 2 Sensor A)"}
,{"P0019","Crankshaft Position - Camshaft Position Correlation (Bank 2 Sensor B)"}
,{"P001A","A Camshaft Profile Control Circuit/Open Bank 1"}
,{"P001B","A Camshaft Profile Control Circuit Low Bank 1"}
,{"P001C","A Camshaft Profile Control Circuit High Bank 1"}
,{"P001D","A Camshaft Profile Control Circuit/Open Bank 2"}
,{"P001E","A Camshaft Profile Control Circuit Low Bank 2"}
,{"P001F","A Camshaft Profile Control Circuit High Bank 2"}
,{"P0020","A Camshaft Position Actuator Circuit (Bank 2)"}
,{"P0021","A Camshaft Position - Timing Over-Advanced or System Performance (Bank 2)"}
,{"P0022","A Camshaft Position - Timing Over-Retarded (Bank 2)"}
,{"P0023","B Camshaft Position - Actuator Circuit (Bank 2)"}
,{"P0024","B Camshaft Position - Timing Over-Advanced or System Performance (Bank 2)"}
,{"P0025","B Camshaft Position - Timing Over-Retarded (Bank 2)"}
,{"P0026","Intake Valve Control Solenoid Circuit Range/Performance Bank 1"}
,{"P0027","Exhaust Valve Control solenoid Circuit Range/Performance Bank 1"}
,{"P0028","Intake valve Control Solenoid Circuit Range/Performance Bank 2"}
,{"P0029","Exhaust Valve Control Solenoid Circuit Range/Performance Bank 2"}
,{"P002A","B Camshaft Profile Control Circuit/Open Bank 1"}
,{"P002B","B Camshaft Profile Control Circuit Low Bank 1"}
,{"P002C","B Camshaft Profile Control Circuit High Bank 1"}
,{"P002D","B Camshaft Profile Control Circuit/Open Bank 2"}
,{"P002E","B Camshaft Profile Control Circuit Low Bank 2"}
,{"P002F","B Camshaft Profile Control Circuit High Bank 2"}
,{"P0030","HO2S Heater Control Circuit (Bank 1 Sensor 1)"}
,{"P0031","HO2S Heater Control Circuit Low (Bank 1 Sensor 1)"}
,{"P0032","HO2S Heater Control Circuit High (Bank 1 Sensor 1)"}
,{"P0033","Turbo Charger Bypass Valve Control Circuit"}
,{"P0034","Turbo Charger Bypass Valve Control Circuit Low"}
,{"P0035","Turbo Charger Bypass Valve Control Circuit High"}
,{"P0036","HO2S Heater Control Circuit (Bank 1 Sensor 2)"}
,{"P0037","HO2S Heater Control Circuit Low (Bank 1 Sensor 2)"}
,{"P0038","HO2S Heater Control Circuit High (Bank 1 Sensor 2)"}
,{"P0039","Turbo/Super Charger Bypass Valve Control Circuit Range/Performance"}
,{"P003A","Turbocharger/Supercharger Boost Control A Position Exceeded Learning Limit"}
,{"P003B","Turbocharger/Supercharger Boost Control B Position Exceeded Learning Limit"}
,{"P003C","A Camshaft Profile Control Performance/Stuck Off Bank 1"}
,{"P003D","A Camshaft Profile Control Stuck On Bank 1"}
,{"P003E","A Camshaft Profile Control Performance/Stuck Off Bank 2"}
,{"P003F","A Camshaft Profile Control Stuck On Bank 2"}
,{"P0040","Upstream Oxygen Sensors Swapped From Bank To Bank"}
,{"P0041","Downstream Oxygen Sensors Swapped From Bank To Bank"}
,{"P0042","HO2S Heater Control Circuit (Bank 1 Sensor 3)"}
,{"P0043","HO2S Heater Control Circuit Low (Bank 1 Sensor 3)"}
,{"P0044","HO2S Heater Control Circuit High (Bank 1 Sensor 3)"}
,{"P0045","Turbocharger/Supercharger Boost Control A Circuit/Open"}
,{"P0046","Turbocharger/Supercharger Boost Control A Circuit Range/Performance"}
,{"P0047","Turbocharger/Supercharger Boost Control A Circuit Low"}
,{"P0048","Turbocharger/Supercharger Boost Control A Circuit High"}
,{"P0049","Turbocharger/Supercharger Turbine Overspeed"}
,{"P004A","Turbocharger/Supercharger Boost Control B Circuit/Open"}
,{"P004B","Turbocharger/Supercharger Boost Control B Circuit Range/Performance"}
,{"P004C","Turbocharger/Supercharger Boost Control B Circuit Low"}
,{"P004D","Turbocharger/Supercharger Boost Control B Circuit High"}
,{"P004E","Turbocharger/Supercharger Boost Control A Circuit Intermittent/Erratic"}
,{"P004F","Turbocharger/Supercharger Boost Control B Circuit Intermittent/Erratic"}
,{"P0050","HO2S Heater Control Circuit (Bank 2 Sensor 1)"}
,{"P0051","HO2S Heater Control Circuit Low (Bank 2 Sensor 1)"}
,{"P0052","HO2S Heater Control Circuit High (Bank 2 Sensor 1)"}
,{"P0053","HO2S Heater Resistance (Bank 1, Sensor 1)"}
,{"P0054","HO2S Heater Resistance (Bank 1, Sensor 2)"}
,{"P0055","HO2S Heater Resistance (Bank 1, Sensor 3)"}
,{"P0056","HO2S Heater Control Circuit (Bank 2 Sensor 2)"}
,{"P0057","HO2S Heater Control Circuit Low (Bank 2 Sensor 2)"}
,{"P0058","HO2S Heater Control Circuit High (Bank 2 Sensor 2)"}
,{"P0059","HO2S Heater Resistance (Bank 2, Sensor 1)"}
,{"P005A","B Camshaft Profile Control Performance/Stuck Off Bank 1"}
,{"P005B","B Camshaft Profile Control Stuck On Bank 1"}
,{"P005C","B Camshaft Profile Control Performance/Stuck Off Bank 2"}
,{"P005D","B Camshaft Profile Control Stuck On Bank 2"}
,{"P005E","Turbocharger/Supercharger Boost Control B Supply Voltage Circuit Low"}
,{"P005F","Turbocharger/Supercharger Boost Control B Supply Voltage Circuit High"}
,{"P0060","HO2S Heater Resistance (Bank 2, Sensor 2)"}
,{"P0061","HO2S Heater Resistance (Bank 2, Sensor 3)"}
,{"P0062","HO2S Heater Control Circuit (Bank 2 Sensor 3)"}
,{"P0063","HO2S Heater Control Circuit Low (Bank 2 Sensor 3)"}
,{"P0064","HO2S Heater Control Circuit High (Bank 2 Sensor 3)"}
,{"P0065","Air Assisted Injector Control Range/Performance"}
,{"P0066","Air Assisted Injector Control Circuit or Circuit Low"}
,{"P0067","Air Assisted Injector Control Circuit High"}
,{"P0068","MAP/MAF - Throttle Position Correlation"}
,{"P0069","Manifold Absolute Pressure - Barometric Pressure Correlation"}
,{"P006A","MAP - Mass or Volume Air Flow Correlation Bank 1"}
,{"P006B","MAP - Exhaust Pressure Correlation"}
,{"P006C","MAP - Turbocharger/Supercharger Inlet Pressure Correlation"}
,{"P006D","Barometric Pressure - Turbocharger/Supercharger Inlet Pressure Correlation"}
,{"P006E","Turbocharger/Supercharger Boost Control A Supply Voltage Circuit Low"}
,{"P006F","Turbocharger/Supercharger Boost Control A Supply Voltage Circuit High"}
,{"P0070","Ambient Air Temperature Sensor Circuit"}
,{"P0071","Ambient Air Temperature Sensor Range/Performance"}
,{"P0072","Ambient Air Temperature Sensor Circuit Low Input"}
,{"P0073","Ambient Air Temperature Sensor Circuit High Input"}
,{"P0074","Ambient Air Temperature Sensor Circuit Intermittent"}
,{"P0075","Intake Valve Control Solenoid Circuit (Bank 1)"}
,{"P0076","Intake Valve Control Solenoid Circuit Low (Bank 1)"}
,{"P0077","Intake Valve Control Solenoid Circuit High (Bank 1)"}
,{"P0078","Exhaust Valve Control Solenoid Circuit (Bank 1)"}
,{"P0079","Exhaust Valve Control Solenoid Circuit Low (Bank 1)"}
,{"P007A","Charge Air Cooler Temperature Sensor Circuit Bank 1"}
,{"P007B","Charge Air Cooler Temperature Sensor Circuit Range/Performance Bank 1"}
,{"P007C","Charge Air Cooler Temperature Sensor Circuit Low Bank 1"}
,{"P007D","Charge Air Cooler Temperature Sensor Circuit High Bank 1"}
,{"P007E","Charge Air Cooler Temperature Sensor Circuit Intermittent/Erratic Bank 1"}
,{"P007F","Charge Air Cooler Temperature Sensor Bank1/Bank2 Correlation"}
,{"P0080","Exhaust Valve Control Solenoid Circuit High (Bank 1)"}
,{"P0081","Intake valve Control Solenoid Circuit (Bank 2)"}
,{"P0082","Intake Valve Control Solenoid Circuit Low (Bank 2)"}
,{"P0083","Intake Valve Control Solenoid Circuit High (Bank 2)"}
,{"P0084","Exhaust Valve Control Solenoid Circuit (Bank 2)"}
,{"P0085","Exhaust Valve Control Solenoid Circuit Low (Bank 2)"}
,{"P0086","Exhaust Valve Control Solenoid Circuit High (Bank 2)"}
,{"P0087","Fuel Rail/System Pressure - Too Low"}
,{"P0088","Fuel Rail/System Pressure - Too High"}
,{"P0089","Fuel Pressure Regulator 1 Performance"}
,{"P008A","Low Pressure Fuel System Pressure - Too Low"}
,{"P008B","Low Pressure Fuel System Pressure - Too High"}
,{"P008C","Fuel Cooler Pump Control Circuit Open"}
,{"P008D","Fuel Cooler Pump Control Circuit Low"}
,{"P008E","Fuel Cooler Pump Control Circuit High"}
,{"P008F","Engine Coolant Temperature/Fuel Temperature Correlation"}
,{"P0090","Fuel Pressure Regulator 1 Control Circuit"}
,{"P0091","Fuel Pressure Regulator 1 Control Circuit Low"}
,{"P0092","Fuel Pressure Regulator 1 Control Circuit High"}
,{"P0093","Fuel System Leak Detected - Large Leak"}
,{"P0094","Fuel System Leak Detected - Small Leak"}
,{"P0095","Intake Air Temperature Sensor 2 Circuit Bank 1"}
,{"P0096","Intake Air Temperature Sensor 2 Circuit Range/Performance Bank 1"}
,{"P0097","Intake Air Temperature Sensor 2 Circuit Low Bank 1"}
,{"P0098","Intake Air Temperature Sensor 2 Circuit High Bank 1"}
,{"P0099","Intake Air Temperature Sensor 2 Circuit Intermittent/Erratic Bank 1"}
,{"P009A","Intake Air Temperature/Ambient Air Temperature Correlation"}
,{"P009B","Fuel Pressure Relief Control Circuit/Open"}
,{"P009C","Fuel Pressure Relief Control Circuit Low"}
,{"P009D","Fuel Pressure Relief Control Circuit High"}
,{"P009E","Fuel Pressure Relief Control Performance/Stuck Off"}
,{"P009F","Fuel Pressure Relief Control Stuck On"}
,{"P00A0","Charge Air Cooler Temperature Sensor Circuit Bank 2"}
,{"P00A1","Charge Air Cooler Temperature Sensor Circuit Range/Performance Bank 2"}
,{"P00A2","Charge Air Cooler Temperature Sensor Circuit Low Bank 2"}
,{"P00A3","Charge Air Cooler Temperature Sensor Circuit High Bank 2"}
,{"P00A4","Charge Air Cooler Temperature Sensor Circuit Intermittent/Erratic Bank 2"}
,{"P00A5","Intake Air Temperature Sensor 2 Circuit Bank 2"}
,{"P00A6","Intake Air Temperature Sensor 2 Circuit Range/Performance Bank 2"}
,{"P00A7","Intake Air Temperature Sensor 2 Circuit Low Bank 2"}
,{"P00A8","Intake Air Temperature Sensor 2 Circuit High Bank 2"}
,{"P00A9","Intake Air Temperature Sensor 2 Circuit Intermittent/Erratic Bank 2"}
,{"P00AA","Intake Air Temperature Sensor 1 Circuit Bank 2"}
,{"P00AB","Intake Air Temperature Sensor 1 Circuit Range/Performance Bank 2"}
,{"P00AC","Intake Air Temperature Sensor 1 Circuit Low Bank 2"}
,{"P00AD","Intake Air Temperature Sensor 1 Circuit High Bank 2"}
,{"P00AE","Intake Air Temperature Sensor 1 Circuit Intermittent/Erratic Bank 2"}
,{"P00AF","Turbocharger/Supercharger Boost Control A Module Performance"}
,{"P00B0","Turbocharger/Supercharger Boost Control B Module Performance"}
,{"P00B1","Radiator Coolant Temperature Sensor Circuit"}
,{"P00B2","Radiator Coolant Temperature Sensor Circuit Range/Performance"}
,{"P00B3","Radiator Coolant Temperature Sensor Circuit Low"}
,{"P00B4","Radiator Coolant Temperature Sensor Circuit High"}
,{"P00B5","Radiator Coolant Temperature Sensor Circuit Intermittent/Erratic"}
,{"P00B6","Radiator Coolant Temperature/Engine Coolant Temperature Correlation"}
,{"P00B7","Engine Coolant Flow Low/Performance"}
,{"P00B8","MAP - Mass or Volume Air Flow Correlation Bank 2"}
,{"P00B9","Low Pressure Fuel System Pressure - Too Low, Low Ambient Temperature"}
,{"P00BA","Low Fuel Pressure - Forced Limited Power"}
,{"P00BB","Fuel Injector Insufficient Flow - Forced Limited Power"}
,{"P00BC","Mass or Volume Air Flow A Circuit Range/Performance - Air Flow Too Low"}
,{"P00BD","Mass or Volume Air Flow A Circuit Range/Performance - Air Flow Too High"}
,{"P00BE","Mass or Volume Air Flow B Circuit Range/Performance - Air Flow Too Low"}
,{"P00BF","Mass or Volume Air Flow B Circuit Range/Performance - Air Flow Too High"}
,{"P00C0","P00FF ISO/SAE Reserved"}
,{"P0000","Reserved"}
,{"P0001","Fuel Volume Regulator Control Circuit/Open"}
,{"P0002","Fuel Volume Regulator Control Circuit Range/Performance"}
,{"P0003","Fuel Volume Regulator Control Circuit Low"}
,{"P0004","Fuel Volume Regulator Control Circuit High"}
,{"P0005","Fuel Shutoff Valve A Control Circuit/Open"}
,{"P0006","Fuel Shutoff Valve A Control Circuit Low"}
,{"P0007","Fuel Shutoff Valve A Control Circuit High"}
,{"P0008","Engine Positions System Performance Bank 1"}
,{"P0009","Engine Position System Performance Bank 2"}
,{"P000A","A Camshaft Position Slow Response Bank 1"}
,{"P000B","B Camshaft Position Slow Response Bank 1"}
,{"P000C","A Camshaft Position Slow Response Bank 2"}
,{"P000D","B Camshaft Position Slow Response Bank 2"}
,{"P000E","Fuel Volume Regulator Control Exceeded Learning Limit"}
,{"P000F","Fuel System Over Pressure Relief Valve Activated"}
,{"P0010","A Camshaft Position Actuator Circuit (Bank 1)"}
,{"P0011","A Camshaft Position - Timing Over-Advanced or System Performance (Bank 1)"}
,{"P0012","A Camshaft Position - Timing Over-Retarded (Bank 1)"}
,{"P0013","B Camshaft Position - Actuator Circuit (Bank 1)"}
,{"P0014","B Camshaft Position - Timing Over-Advanced or System Performance (Bank 1)"}
,{"P0015","B Camshaft Position -Timing Over-Retarded (Bank 1)"}
,{"P0016","Crankshaft Position - Camshaft Position Correlation (Bank 1 Sensor A)"}
,{"P0017","Crankshaft Position - Camshaft Position Correlation (Bank 1 Sensor B)"}
,{"P0018","Crankshaft Position - Camshaft Position Correlation (Bank 2 Sensor A)"}
,{"P0019","Crankshaft Position - Camshaft Position Correlation (Bank 2 Sensor B)"}
,{"P001A","A Camshaft Profile Control Circuit/Open Bank 1"}
,{"P001B","A Camshaft Profile Control Circuit Low Bank 1"}
,{"P001C","A Camshaft Profile Control Circuit High Bank 1"}
,{"P001D","A Camshaft Profile Control Circuit/Open Bank 2"}
,{"P001E","A Camshaft Profile Control Circuit Low Bank 2"}
,{"P001F","A Camshaft Profile Control Circuit High Bank 2"}
,{"P0020","A Camshaft Position Actuator Circuit (Bank 2)"}
,{"P0021","A Camshaft Position - Timing Over-Advanced or System Performance (Bank 2)"}
,{"P0022","A Camshaft Position - Timing Over-Retarded (Bank 2)"}
,{"P0023","B Camshaft Position - Actuator Circuit (Bank 2)"}
,{"P0024","B Camshaft Position - Timing Over-Advanced or System Performance (Bank 2)"}
,{"P0025","B Camshaft Position - Timing Over-Retarded (Bank 2)"}
,{"P0026","Intake Valve Control Solenoid Circuit Range/Performance Bank 1"}
,{"P0027","Exhaust Valve Control solenoid Circuit Range/Performance Bank 1"}
,{"P0028","Intake valve Control Solenoid Circuit Range/Performance Bank 2"}
,{"P0029","Exhaust Valve Control Solenoid Circuit Range/Performance Bank 2"}
,{"P002A","B Camshaft Profile Control Circuit/Open Bank 1"}
,{"P002B","B Camshaft Profile Control Circuit Low Bank 1"}
,{"P002C","B Camshaft Profile Control Circuit High Bank 1"}
,{"P002D","B Camshaft Profile Control Circuit/Open Bank 2"}
,{"P002E","B Camshaft Profile Control Circuit Low Bank 2"}
,{"P002F","B Camshaft Profile Control Circuit High Bank 2"}
,{"P0030","HO2S Heater Control Circuit (Bank 1 Sensor 1)"}
,{"P0031","HO2S Heater Control Circuit Low (Bank 1 Sensor 1)"}
,{"P0032","HO2S Heater Control Circuit High (Bank 1 Sensor 1)"}
,{"P0033","Turbo Charger Bypass Valve Control Circuit"}
,{"P0034","Turbo Charger Bypass Valve Control Circuit Low"}
,{"P0035","Turbo Charger Bypass Valve Control Circuit High"}
,{"P0036","HO2S Heater Control Circuit (Bank 1 Sensor 2)"}
,{"P0037","HO2S Heater Control Circuit Low (Bank 1 Sensor 2)"}
,{"P0038","HO2S Heater Control Circuit High (Bank 1 Sensor 2)"}
,{"P0039","Turbo/Super Charger Bypass Valve Control Circuit Range/Performance"}
,{"P003A","Turbocharger/Supercharger Boost Control A Position Exceeded Learning Limit"}
,{"P003B","Turbocharger/Supercharger Boost Control B Position Exceeded Learning Limit"}
,{"P003C","A Camshaft Profile Control Performance/Stuck Off Bank 1"}
,{"P003D","A Camshaft Profile Control Stuck On Bank 1"}
,{"P003E","A Camshaft Profile Control Performance/Stuck Off Bank 2"}
,{"P003F","A Camshaft Profile Control Stuck On Bank 2"}
,{"P0040","Upstream Oxygen Sensors Swapped From Bank To Bank"}
,{"P0041","Downstream Oxygen Sensors Swapped From Bank To Bank"}
,{"P0042","HO2S Heater Control Circuit (Bank 1 Sensor 3)"}
,{"P0043","HO2S Heater Control Circuit Low (Bank 1 Sensor 3)"}
,{"P0044","HO2S Heater Control Circuit High (Bank 1 Sensor 3)"}
,{"P0045","Turbocharger/Supercharger Boost Control A Circuit/Open"}
,{"P0046","Turbocharger/Supercharger Boost Control A Circuit Range/Performance"}
,{"P0047","Turbocharger/Supercharger Boost Control A Circuit Low"}
,{"P0048","Turbocharger/Supercharger Boost Control A Circuit High"}
,{"P0049","Turbocharger/Supercharger Turbine Overspeed"}
,{"P004A","Turbocharger/Supercharger Boost Control B Circuit/Open"}
,{"P004B","Turbocharger/Supercharger Boost Control B Circuit Range/Performance"}
,{"P004C","Turbocharger/Supercharger Boost Control B Circuit Low"}
,{"P004D","Turbocharger/Supercharger Boost Control B Circuit High"}
,{"P004E","Turbocharger/Supercharger Boost Control A Circuit Intermittent/Erratic"}
,{"P004F","Turbocharger/Supercharger Boost Control B Circuit Intermittent/Erratic"}
,{"P0050","HO2S Heater Control Circuit (Bank 2 Sensor 1)"}
,{"P0051","HO2S Heater Control Circuit Low (Bank 2 Sensor 1)"}
,{"P0052","HO2S Heater Control Circuit High (Bank 2 Sensor 1)"}
,{"P0053","HO2S Heater Resistance (Bank 1, Sensor 1)"}
,{"P0054","HO2S Heater Resistance (Bank 1, Sensor 2)"}
,{"P0055","HO2S Heater Resistance (Bank 1, Sensor 3)"}
,{"P0056","HO2S Heater Control Circuit (Bank 2 Sensor 2)"}
,{"P0057","HO2S Heater Control Circuit Low (Bank 2 Sensor 2)"}
,{"P0058","HO2S Heater Control Circuit High (Bank 2 Sensor 2)"}
,{"P0059","HO2S Heater Resistance (Bank 2, Sensor 1)"}
,{"P005A","B Camshaft Profile Control Performance/Stuck Off Bank 1"}
,{"P005B","B Camshaft Profile Control Stuck On Bank 1"}
,{"P005C","B Camshaft Profile Control Performance/Stuck Off Bank 2"}
,{"P005D","B Camshaft Profile Control Stuck On Bank 2"}
,{"P005E","Turbocharger/Supercharger Boost Control B Supply Voltage Circuit Low"}
,{"P005F","Turbocharger/Supercharger Boost Control B Supply Voltage Circuit High"}
,{"P0060","HO2S Heater Resistance (Bank 2, Sensor 2)"}
,{"P0061","HO2S Heater Resistance (Bank 2, Sensor 3)"}
,{"P0062","HO2S Heater Control Circuit (Bank 2 Sensor 3)"}
,{"P0063","HO2S Heater Control Circuit Low (Bank 2 Sensor 3)"}
,{"P0064","HO2S Heater Control Circuit High (Bank 2 Sensor 3)"}
,{"P0065","Air Assisted Injector Control Range/Performance"}
,{"P0066","Air Assisted Injector Control Circuit or Circuit Low"}
,{"P0067","Air Assisted Injector Control Circuit High"}
,{"P0068","MAP/MAF - Throttle Position Correlation"}
,{"P0069","Manifold Absolute Pressure - Barometric Pressure Correlation"}
,{"P006A","MAP - Mass or Volume Air Flow Correlation Bank 1"}
,{"P006B","MAP - Exhaust Pressure Correlation"}
,{"P006C","MAP - Turbocharger/Supercharger Inlet Pressure Correlation"}
,{"P006D","Barometric Pressure - Turbocharger/Supercharger Inlet Pressure Correlation"}
,{"P006E","Turbocharger/Supercharger Boost Control A Supply Voltage Circuit Low"}
,{"P006F","Turbocharger/Supercharger Boost Control A Supply Voltage Circuit High"}
,{"P0070","Ambient Air Temperature Sensor Circuit"}
,{"P0071","Ambient Air Temperature Sensor Range/Performance"}
,{"P0072","Ambient Air Temperature Sensor Circuit Low Input"}
,{"P0073","Ambient Air Temperature Sensor Circuit High Input"}
,{"P0074","Ambient Air Temperature Sensor Circuit Intermittent"}
,{"P0075","Intake Valve Control Solenoid Circuit (Bank 1)"}
,{"P0076","Intake Valve Control Solenoid Circuit Low (Bank 1)"}
,{"P0077","Intake Valve Control Solenoid Circuit High (Bank 1)"}
,{"P0078","Exhaust Valve Control Solenoid Circuit (Bank 1)"}
,{"P0079","Exhaust Valve Control Solenoid Circuit Low (Bank 1)"}
,{"P007A","Charge Air Cooler Temperature Sensor Circuit Bank 1"}
,{"P007B","Charge Air Cooler Temperature Sensor Circuit Range/Performance Bank 1"}
,{"P007C","Charge Air Cooler Temperature Sensor Circuit Low Bank 1"}
,{"P007D","Charge Air Cooler Temperature Sensor Circuit High Bank 1"}
,{"P007E","Charge Air Cooler Temperature Sensor Circuit Intermittent/Erratic Bank 1"}
,{"P007F","Charge Air Cooler Temperature Sensor Bank1/Bank2 Correlation"}
,{"P0080","Exhaust Valve Control Solenoid Circuit High (Bank 1)"}
,{"P0081","Intake valve Control Solenoid Circuit (Bank 2)"}
,{"P0082","Intake Valve Control Solenoid Circuit Low (Bank 2)"}
,{"P0083","Intake Valve Control Solenoid Circuit High (Bank 2)"}
,{"P0084","Exhaust Valve Control Solenoid Circuit (Bank 2)"}
,{"P0085","Exhaust Valve Control Solenoid Circuit Low (Bank 2)"}
,{"P0086","Exhaust Valve Control Solenoid Circuit High (Bank 2)"}
,{"P0087","Fuel Rail/System Pressure - Too Low"}
,{"P0088","Fuel Rail/System Pressure - Too High"}
,{"P0089","Fuel Pressure Regulator 1 Performance"}
,{"P008A","Low Pressure Fuel System Pressure - Too Low"}
,{"P008B","Low Pressure Fuel System Pressure - Too High"}
,{"P008C","Fuel Cooler Pump Control Circuit Open"}
,{"P008D","Fuel Cooler Pump Control Circuit Low"}
,{"P008E","Fuel Cooler Pump Control Circuit High"}
,{"P008F","Engine Coolant Temperature/Fuel Temperature Correlation"}
,{"P0090","Fuel Pressure Regulator 1 Control Circuit"}
,{"P0091","Fuel Pressure Regulator 1 Control Circuit Low"}
,{"P0092","Fuel Pressure Regulator 1 Control Circuit High"}
,{"P0093","Fuel System Leak Detected - Large Leak"}
,{"P0094","Fuel System Leak Detected - Small Leak"}
,{"P0095","Intake Air Temperature Sensor 2 Circuit Bank 1"}
,{"P0096","Intake Air Temperature Sensor 2 Circuit Range/Performance Bank 1"}
,{"P0097","Intake Air Temperature Sensor 2 Circuit Low Bank 1"}
,{"P0098","Intake Air Temperature Sensor 2 Circuit High Bank 1"}
,{"P0099","Intake Air Temperature Sensor 2 Circuit Intermittent/Erratic Bank 1"}
,{"P009A","Intake Air Temperature/Ambient Air Temperature Correlation"}
,{"P009B","Fuel Pressure Relief Control Circuit/Open"}
,{"P009C","Fuel Pressure Relief Control Circuit Low"}
,{"P009D","Fuel Pressure Relief Control Circuit High"}
,{"P009E","Fuel Pressure Relief Control Performance/Stuck Off"}
,{"P009F","Fuel Pressure Relief Control Stuck On"}
,{"P00A0","Charge Air Cooler Temperature Sensor Circuit Bank 2"}
,{"P00A1","Charge Air Cooler Temperature Sensor Circuit Range/Performance Bank 2"}
,{"P00A2","Charge Air Cooler Temperature Sensor Circuit Low Bank 2"}
,{"P00A3","Charge Air Cooler Temperature Sensor Circuit High Bank 2"}
,{"P00A4","Charge Air Cooler Temperature Sensor Circuit Intermittent/Erratic Bank 2"}
,{"P00A5","Intake Air Temperature Sensor 2 Circuit Bank 2"}
,{"P00A6","Intake Air Temperature Sensor 2 Circuit Range/Performance Bank 2"}
,{"P00A7","Intake Air Temperature Sensor 2 Circuit Low Bank 2"}
,{"P00A8","Intake Air Temperature Sensor 2 Circuit High Bank 2"}
,{"P00A9","Intake Air Temperature Sensor 2 Circuit Intermittent/Erratic Bank 2"}
,{"P00AA","Intake Air Temperature Sensor 1 Circuit Bank 2"}
,{"P00AB","Intake Air Temperature Sensor 1 Circuit Range/Performance Bank 2"}
,{"P00AC","Intake Air Temperature Sensor 1 Circuit Low Bank 2"}
,{"P00AD","Intake Air Temperature Sensor 1 Circuit High Bank 2"}
,{"P00AE","Intake Air Temperature Sensor 1 Circuit Intermittent/Erratic Bank 2"}
,{"P00AF","Turbocharger/Supercharger Boost Control A Module Performance"}
,{"P00B0","Turbocharger/Supercharger Boost Control B Module Performance"}
,{"P00B1","Radiator Coolant Temperature Sensor Circuit"}
,{"P00B2","Radiator Coolant Temperature Sensor Circuit Range/Performance"}
,{"P00B3","Radiator Coolant Temperature Sensor Circuit Low"}
,{"P00B4","Radiator Coolant Temperature Sensor Circuit High"}
,{"P00B5","Radiator Coolant Temperature Sensor Circuit Intermittent/Erratic"}
,{"P00B6","Radiator Coolant Temperature/Engine Coolant Temperature Correlation"}
,{"P00B7","Engine Coolant Flow Low/Performance"}
,{"P00B8","MAP - Mass or Volume Air Flow Correlation Bank 2"}
,{"P00B9","Low Pressure Fuel System Pressure - Too Low, Low Ambient Temperature"}
,{"P00BA","Low Fuel Pressure - Forced Limited Power"}
,{"P00BB","Fuel Injector Insufficient Flow - Forced Limited Power"}
,{"P00BC","Mass or Volume Air Flow A Circuit Range/Performance - Air Flow Too Low"}
,{"P00BD","Mass or Volume Air Flow A Circuit Range/Performance - Air Flow Too High"}
,{"P00BE","Mass or Volume Air Flow B Circuit Range/Performance - Air Flow Too Low"}
,{"P00BF","Mass or Volume Air Flow B Circuit Range/Performance - Air Flow Too High"}
,{"P00C0","P00FF ISO/SAE Reserved"}
,{"P3400","Cylinder Deactivation System Bank 1"}
,{"P3401","Cylinder 1 Deactivation/Intake Valve Control Circuit/Open"}
,{"P3402","Cylinder 1 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3403","Cylinder 1 Deactivation/Intake Valve Control Circuit Low"}
,{"P3404","Cylinder 1 Deactivation/Intake Valve Control Circuit High"}
,{"P3405","Cylinder 1 Exhaust Valve Control Circuit/Open"}
,{"P3406","Cylinder 1 Exhaust Valve Control Circuit Performance"}
,{"P3407","Cylinder 1 Exhaust Valve Control Circuit Low"}
,{"P3408","Cylinder 1 Exhaust Valve Control Circuit High"}
,{"P3409","Cylinder 2 Deactivation/Intake Valve Control Circuit/Open"}
,{"P340A","P340B, P340C, P340D, P340E, P340F ISO/SAE Reserved"}
,{"P3410","Cylinder 2 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3411","Cylinder 2 Deactivation/Intake Valve Control Circuit Low"}
,{"P3412","Cylinder 2 Deactivation/Intake Valve Control Circuit High"}
,{"P3413","Cylinder 2 Exhaust Valve Control Circuit/Open"}
,{"P3414","Cylinder 2 Exhaust Valve Control Circuit Performance"}
,{"P3415","Cylinder 2 Exhaust Valve Control Circuit Low"}
,{"P3416","Cylinder 2 Exhaust Valve Control Circuit High"}
,{"P3417","Cylinder 3 Deactivation/Intake Valve Control Circuit/Open"}
,{"P3418","Cylinder 3 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3419","Cylinder 3 Deactivation/Intake Valve Control Circuit Low"}
,{"P341A","P341B, P341C, P341D, P341E, P341F ISO/SAE Reserved"}
,{"P3420","Cylinder 3 Deactivation/Intake Valve Control Circuit High"}
,{"P3421","Cylinder 3 Exhaust Valve Control Circuit/Open"}
,{"P3422","Cylinder 3 Exhaust Valve Control Circuit Performance"}
,{"P3423","Cylinder 3 Exhaust Valve Control Circuit Low"}
,{"P3424","Cylinder 3 Exhaust Valve Control Circuit High"}
,{"P3425","Cylinder 4 Deactivation/Intake Valve Control Circuit/Open"}
,{"P3426","Cylinder 4 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3427","Cylinder 4 Deactivation/Intake Valve Control Circuit Low"}
,{"P3428","Cylinder 4 Deactivation/Intake Valve Control Circuit High"}
,{"P3429","Cylinder 4 Exhaust Valve Control Circuit/Open"}
,{"P342A","P342B, P342C, P342D, P342E, P342F ISO/SAE Reserved"}
,{"P3430","Cylinder 4 Exhaust Valve Control Circuit Performance"}
,{"P3431","Cylinder 4 Exhaust Valve Control Circuit Low"}
,{"P3432","Cylinder 4 Exhaust Valve Control Circuit High"}
,{"P3433","Cylinder 5 Deactivation/Intake Valve Control Circuit/Open"}
,{"P3434","Cylinder 5 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3435","Cylinder 5 Deactivation/Intake Valve Control Circuit Low"}
,{"P3436","Cylinder 5 Deactivation/Intake Valve Control Circuit High"}
,{"P3437","Cylinder 5 Exhaust Valve Control Circuit/Open"}
,{"P3438","Cylinder 5 Exhaust Valve Control Circuit Performance"}
,{"P3439","Cylinder 5 Exhaust Valve Control Circuit Low"}
,{"P343A","P343B, P343C, P343D, P343E, P343F ISO/SAE Reserved"}
,{"P3440","Cylinder 5 Exhaust Valve Control Circuit High"}
,{"P3441","Cylinder 6 Deactivation/Intake Valve Control Circuit/Open"}
,{"P3442","Cylinder 6 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3443","Cylinder 6 Deactivation/Intake Valve Control Circuit Low"}
,{"P3444","Cylinder 6 Deactivation/Intake Valve Control Circuit High"}
,{"P3445","Cylinder 6 Exhaust Valve Control Circuit/Open"}
,{"P3446","Cylinder 6 Exhaust Valve Control Circuit Performance"}
,{"P3447","Cylinder 6 Exhaust Valve Control Circuit Low"}
,{"P3448","Cylinder 6 Exhaust Valve Control Circuit High"}
,{"P3449","Cylinder 7 Deactivation/Intake Valve Control Circuit/Open"}
,{"P344A","P344B, P344C, P344D, P344E, P344F ISO/SAE Reserved"}
,{"P3450","Cylinder 7 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3451","Cylinder 7 Deactivation/Intake Valve Control Circuit Low"}
,{"P3452","Cylinder 7 Deactivation/Intake Valve Control Circuit High"}
,{"P3453","Cylinder 7 Exhaust Valve Control Circuit/Open"}
,{"P3454","Cylinder 7 Exhaust Valve Control Circuit Performance"}
,{"P3455","Cylinder 7 Exhaust Valve Control Circuit Low"}
,{"P3456","Cylinder 7 Exhaust Valve Control Circuit High"}
,{"P3457","Cylinder 8 Deactivation/Intake Valve Control Circuit/Open"}
,{"P3458","Cylinder 8 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3459","Cylinder 8 Deactivation/Intake Valve Control Circuit Low"}
,{"P345A","P345B, P345C, P345D, P345E, P345F ISO/SAE Reserved"}
,{"P3460","Cylinder 8 Deactivation/Intake Valve Control Circuit High"}
,{"P3461","Cylinder 8 Exhaust Valve Control Circuit/Open"}
,{"P3462","Cylinder 8 Exhaust Valve Control Circuit Performance"}
,{"P3463","Cylinder 8 Exhaust Valve Control Circuit Low"}
,{"P3464","Cylinder 8 Exhaust Valve Control Circuit High"}
,{"P3465","Cylinder 9 Deactivation/Intake Valve Control Circuit/Open"}
,{"P3466","Cylinder 9 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3467","Cylinder 9 Deactivation/Intake Valve Control Circuit Low"}
,{"P3468","Cylinder 9 Deactivation/Intake Valve Control Circuit High"}
,{"P3469","Cylinder 9 Exhaust Valve Control Circuit/Open"}
,{"P346A","P346B, P346C, P346D, P346E, P346F ISO/SAE Reserved"}
,{"P3470","Cylinder 9 Exhaust Valve Control Circuit Performance"}
,{"P3471","Cylinder 9 Exhaust Valve Control Circuit Low"}
,{"P3472","Cylinder 9 Exhaust Valve Control Circuit High"}
,{"P3473","Cylinder 10 Deactivation/Intake Valve Control Circuit/Open"}
,{"P3474","Cylinder 10 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3475","Cylinder 10 Deactivation/Intake Valve Control Circuit Low"}
,{"P3476","Cylinder 10 Deactivation/Intake Valve Control Circuit High"}
,{"P3477","Cylinder 10 Exhaust Valve Control Circuit/Open"}
,{"P3478","Cylinder 10 Exhaust Valve Control Circuit Performance"}
,{"P3479","Cylinder 10 Exhaust Valve Control Circuit Low"}
,{"P347A","P347B, P347C, P347D, P347E, P347F ISO/SAE Reserved"}
,{"P3480","Cylinder 10 Exhaust Valve Control Circuit High"}
,{"P3481","Cylinder 11 Deactivation/Intake Valve Control Circuit/Open"}
,{"P3482","Cylinder 11 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3483","Cylinder 11 Deactivation/Intake Valve Control Circuit Low"}
,{"P3484","Cylinder 11 Deactivation/Intake Valve Control Circuit High"}
,{"P3485","Cylinder 11 Exhaust Valve Control Circuit/Open"}
,{"P3486","Cylinder 11 Exhaust Valve Control Circuit Performance"}
,{"P3487","Cylinder 11 Exhaust Valve Control Circuit Low"}
,{"P3488","Cylinder 11 Exhaust Valve Control Circuit High"}
,{"P3489","Cylinder 12 Deactivation/Intake Valve Control Circuit/Open"}
,{"P348A","P348B, P348C, P348D, P348E, P348F ISO/SAE Reserved"}
,{"P3490","Cylinder 12 Deactivation/Intake Valve Control Circuit Performance"}
,{"P3491","Cylinder 12 Deactivation/Intake Valve Control Circuit Low"}
,{"P3492","Cylinder 12 Deactivation/Intake Valve Control Circuit High"}
,{"P3493","Cylinder 12 Exhaust Valve Control Circuit/Open"}
,{"P3494","Cylinder 12 Exhaust Valve Control Circuit Performance"}
,{"P3495","Cylinder 12 Exhaust Valve Control Circuit Low"}
,{"P3496","Cylinder 12 Exhaust Valve Control Circuit High"}
,{"P3497","Cylinder Deactivation System Bank 2"}
,{"P3498","P34FF, P3500, P3600, P3700, P3800, P3900, P3A00, P3B00, P3C00, P3D00, P3E00, P3F00 ISO/SAE Reserved"}
,{"P2800","Range Sensor B Circuit (PRNDL Input)"}
,{"P2801","Range Sensor B Circuit Range/Performance"}
,{"P2802","Range Sensor B Circuit Low"}
,{"P2803","Range Sensor B Circuit High"}
,{"P2804","Range Sensor B Circuit Intermittent"}
,{"P2808","Control Solenoid G Performance/Stuck Off"}
,{"P2809","Control Solenoid G Stuck On"}
,{"P280C","P280D, P280E, P280F ISO/SAE Reserved"}
,{"P2811","Control Solenoid G Intermittent"}
,{"P2812","Control Solenoid G Control Circuit/Open"}
,{"P2813","Control Solenoid G Control Circuit Range/Performance"}
,{"P2814","Control Solenoid G Control Circuit Low"}
,{"P2815","Control Solenoid G Control Circuit High"}
,{"P2816","Control Solenoid H"}
,{"P2817","Control Solenoid H Performance/Stuck Off"}
,{"P2818","Control Solenoid H Stuck On"}
,{"P281A","Control Solenoid H Intermittent"}
,{"P281B","Control Solenoid H Control Circuit/Open"}
,{"P281C","Control Solenoid H Control Circuit Range/Performance"}
,{"P281D","Control Solenoid H Control Circuit Low"}
,{"P281F","Control Solenoid J"}
,{"P2820","Control Solenoid J Performance/Stuck Off"}
,{"P2821","Control Solenoid J Stuck On"}
,{"P2822","Control Solenoid J Electrical"}
,{"P2823","Control Solenoid J Intermittent"}
,{"P2824","Control Solenoid J Control Circuit/Open"}
,{"P2825","Control Solenoid J Control Circuit Range/Performance"}
,{"P2826","Control Solenoid J Control Circuit Low"}
,{"P2827","Control Solenoid J Control Circuit High"}
,{"P2828","Control Solenoid K"}
,{"P2829","Control Solenoid K Performance/Stuck Off"}
,{"P282A","Control Solenoid K Stuck On"}
,{"P282B","Control Solenoid K Electrical"}
,{"P282C","Control Solenoid K Intermittent"}
,{"P282D","Control Solenoid K Control Circuit/Open"}
,{"P282E","Control Solenoid K Control Circuit Range/Performance"}
,{"P282F","Control Solenoid K Control Circuit Low"}
,{"P2830","Control Solenoid K Control Circuit High"}
,{"P2A02","Sensor Circuit Range/Performance Bank 1 Sensor 3"}
,{"P2A03","Sensor Circuit Range/Performance Bank 2 Sensor 1"}
,{"P2A04","Sensor Circuit Range/Performance Bank 2 Sensor 2"}
,{"P2A05","Sensor Circuit Range/Performance Bank 2 Sensor 3"}
,{"P2A0A","P2A0B, P2A0C, P2A0D, P2A0E, P2A0F ISO/SAE Reserved"}
,{"P2BAC","Exceedence - Deactivation of EGR"}
,{"P2BAF","P2BFF, P2C00, P2D00, P2E00, P2F00 ISO/SAE Reserved"}
,{"P2700","Friction Element A Apply Time Range/Performance"}
,{"P2701","Friction Element B Apply Time Range/Performance"}
,{"P2703","Friction Element D Apply Time Range/Performance"}
,{"P2704","Friction Element E Apply Time Range/Performance"}
,{"P2705","Friction Element F Apply Time Range/Performance"}
,{"P2706","Solenoid F Malfunction"}
,{"P2707","Solenoid F Performance/Stuck Off"}
,{"P2708","Solenoid F Stuck On"}
,{"P2709","Solenoid F Electrical"}
,{"P270A","P270B, P270C, P270D, P270E, P270F ISO/SAE Reserved"}
,{"P2714","Control Solenoid D Performance/Stuck Off"}
,{"P2715","Control Solenoid D Stuck On"}
,{"P2716","Control Solenoid D Electrical"}
,{"P2717","Control Solenoid D Intermittent"}
,{"P2718","Control Solenoid D Control Circuit/Open"}
,{"P2719","Control Solenoid D Control Circuit Range/Performance"}
,{"P271A","P271B, P271C, P271D, P271E, P271F ISO/SAE Reserved"}
,{"P2720","Control Solenoid D Control Circuit Low"}
,{"P2721","Control Solenoid D Control Circuit High"}
,{"P2722","Control Solenoid E"}
,{"P2723","Control Solenoid E Performance/Stuck Off"}
,{"P2724","Control Solenoid E Stuck On"}
,{"P2725","Control Solenoid E Electrical"}
,{"P2726","Control Solenoid E Intermittent"}
,{"P2727","Control Solenoid E Control Circuit/Open"}
,{"P2728","Control Solenoid E Control Circuit Range/Performance"}
,{"P2729","Control Solenoid E Control Circuit Low"}
,{"P2730","Control Solenoid E Control Circuit High"}
,{"P2731","Control Solenoid F"}
,{"P2732","Control Solenoid F Performance/Stuck Off"}
,{"P2733","Control Solenoid F Stuck On"}
,{"P2734","Control Solenoid F Electrical"}
,{"P2735","Control Solenoid F Intermittent"}
,{"P2737","Control Solenoid F Control Circuit Range/Performance"}
,{"P2738","Control Solenoid F Control Circuit Low"}
,{"P2739","Control Solenoid F Control Circuit High"}
,{"P2740","Fluid Temperature Sensor B Circuit"}
,{"P2741","Fluid Temperature Sensor B Circuit Range/Performance"}
,{"P2743","Fluid Temperature Sensor B Circuit High"}
,{"P2744","Fluid Temperature Sensor B Circuit Intermittent"}
,{"P2745","Shaft Speed Sensor B Circuit"}
,{"P2748","Shaft Speed Sensor B Circuit Intermittent"}
,{"P2749","Shaft Speed Sensor C Circuit"}
,{"P274A","P274B, P274C, P274D, P274E, P274F ISO/SAE Reserved"}
,{"P2750","Shaft Speed Sensor C Circuit Range/Performance"}
,{"P2751","Shaft Speed Sensor C Circuit No Signal"}
,{"P2752","Shaft Speed Sensor C Circuit Intermittent"}
,{"P275A","P275B, P275C, P275D, P275E, P275F ISO/SAE Reserved"}
,{"P2765","Speed Sensor B Circuit"}
,{"P2766","Speed Sensor B Circuit Range/Performance"}
,{"P2768","Speed Sensor B Circuit Intermittent"}
,{"P2769","Converter Clutch Circuit Low"}
,{"P276A","P276B, P276C, P276D, P276E, P276F ISO/SAE Reserved"}
,{"P2770","Converter Clutch Circuit High"}
,{"P277A","P277B, P277C, P277D, P277E, P277F ISO/SAE Reserved"}
,{"P27A1","P27FF ISO/SAE Reserved"}
,{"P2600","Pump A Control Circuit/Open"}
,{"P2601","Pump A Control Circuit Range/Performance"}
,{"P2602","Pump A Control Circuit Low"}
,{"P2603","Pump A Control Circuit High"}
,{"P2604","Air Heater A Circuit Range/Performance"}
,{"P2605","Air Heater B Circuit/Open"}
,{"P2606","Air Heater B Circuit Range/Performance"}
,{"P2607","Air Heater B Circuit Low"}
,{"P2609","Air Heater System Performance"}
,{"P260A","Control Circuit /Open"}
,{"P260B","Control Circuit Low"}
,{"P260D","Engaged Lamp Control Circuit"}
,{"P2610","Internal Engine Off Timer Performance"}
,{"P261A","Pump B Control Circuit/Open"}
,{"P261B","Pump B Control Circuit Range/Performance"}
,{"P261C","Pump B Control Circuit Low"}
,{"P261D","Pump B Control Circuit High"}
,{"P261E","P261F ISO/SAE Reserved"}
,{"P2626","Sensor Pumping Current Trim Circuit/Open Bank 1 Sensor 1"}
,{"P2627","Sensor Pumping Current Trim Circuit Low Bank 1 Sensor 1"}
,{"P2628","Sensor Pumping Current Trim Circuit High Bank 1 Sensor 1"}
,{"P262A","P262B, P262C, P262D, P262E, P262F ISO/SAE Reserved"}
,{"P2630","Sensor Pumping Current Trim Circuit Low Bank 2 Sensor 1"}
,{"P2631","Sensor Pumping Current Trim Circuit High Bank 2 Sensor 1"}
,{"P2632","Pump B Control Circuit /Open"}
,{"P2633","Pump B Control Circuit Low"}
,{"P2634","Pump B Control Circuit High"}
,{"P264F","Reserved"}
,{"P265FE","Reserved"}
,{"P2669","Supply Voltage B Circuit /Open"}
,{"P266F","Reserved"}
,{"P2671","Supply Voltage B Circuit High"}
,{"P2684","Supply Voltage C Circuit/Open"}
,{"P2685","Supply Voltage C Circuit Low"}
,{"P2686","Supply Voltage C Circuit High"}
,{"P26A3","P26FF ISO/SAE Reserved"}
,{"P2500","Lamp/L-Terminal Circuit Low"}
,{"P2501","Lamp/L-Terminal Circuit High"}
,{"P2509","Power Input Signal Intermittent"}
,{"P250A","Oil Level Sensor Circuit"}
,{"P250B","Oil Level Sensor Circuit Range/Performance"}
,{"P250C","Oil Level Sensor Circuit Low"}
,{"P250E","Oil Level Sensor Circuit Intermittent/Erratic"}
,{"P250F","Oil Level Too Low"}
,{"P2515","Refrigerant Pressure Sensor B Circuit"}
,{"P252E","Oil Quality Circuit Intermittent/Erratic"}
,{"P252F","Oil Level Too High"}
,{"P253A","Sense Circuit/Open"}
,{"P253C","Sense Circuit Low"}
,{"P253D","Sense Circuit High"}
,{"P253E","Sense Circuit Intermittent/Erratic"}
,{"P253F","Oil Deteriorated"}
,{"P2540","Pressure Fuel System Sensor Circuit Range/Performance"}
,{"P2542","Pressure Fuel System Sensor Circuit High"}
,{"P2543","Pressure Fuel System Sensor Circuit Intermittent"}
,{"P254A","Speed Selector Sensor/Switch 1 Circuit/Open"}
,{"P254B","Speed Selector Sensor/Switch 1 Range/Performance"}
,{"P254C","Speed Selector Sensor/Switch 1 Circuit Low"}
,{"P2556","Coolant Level Sensor/Switch Circuit"}
,{"P2558","Coolant Level Sensor/Switch Circuit Low"}
,{"P255D","Speed Selector Sensor/Switch 2 Circuit High"}
,{"P255E","Speed Selector Sensor/Switch 2 Circuit Intermittent/Erratic"}
,{"P2560","Coolant Level Low"}
,{"P2563","Boost Control Position Sensor A Circuit Range/Performance"}
,{"P2564","Boost Control Position Sensor A Circuit Low"}
,{"P2566","Boost Control Position Sensor A Circuit Intermittent"}
,{"P2586","Boost Control Position Sensor B Circuit"}
,{"P2588","Boost Control Position Sensor B Circuit Low"}
,{"P2589","Turbocharger Boost Control Position Sensor B Circuit High"}
,{"P2590","Boost Control Position Sensor B Circuit Intermittent/Erratic"}
,{"P240D","P240E, P240F ISO/SAE Reserved"}
,{"P241A","P241B, P241C, P241D, P241E, P241F ISO/SAE Reserved"}
,{"P2425","Gas Recirculation Cooling Valve Control Circuit/Open"}
,{"P2426","Gas Recirculation Cooling Valve Control Circuit Low"}
,{"P2427","Gas Recirculation Cooling Valve Control Circuit High"}
,{"P242F","Diesel Particulate Filter Restriction - Ash Accumulation"}
,{"P2430","Air Injection System Air Flow/Pressure Sensor Circuit Bank 1"}
,{"P2431","Air Injection System Air Flow/Pressure Sensor Circuit Range/Performance Bank 1"}
,{"P2432","Air Injection System Air Flow/Pressure Sensor Circuit Low Bank 1"}
,{"P2433","Air Injection System Air Flow/Pressure Sensor Circuit High Bank 1"}
,{"P2435","Air Injection System Air Flow/Pressure Sensor Circuit Bank 2"}
,{"P2437","Air Injection System Air Flow/Pressure Sensor Circuit Low Bank 2"}
,{"P2452","Particulate Filter Pressure Sensor A Circuit"}
,{"P2453","Particulate Filter Pressure Sensor A Circuit Range/Performance"}
,{"P2454","Particulate Filter Pressure Sensor A Circuit Low"}
,{"P2455","Particulate Filter Pressure Sensor A Circuit High"}
,{"P2456","Particulate Filter Pressure Sensor A Circuit Intermittent/Erratic"}
,{"P2457","Gas Recirculation Cooling System Performance"}
,{"P2458","Particulate Filter Regeneration Duration"}
,{"P2459","Particulate Filter Regeneration Frequency"}
,{"P245A","Gas Recirculation Cooler Bypass Control Circuit/Open"}
,{"P245B","Gas Recirculation Cooler Bypass Control Circuit Range/Performance"}
,{"P245C","Gas Recirculation Cooler Bypass Control Circuit Low"}
,{"P245E","Particulate Filter Pressure Sensor B Circuit"}
,{"P245F","Particulate Filter Pressure Sensor B Circuit Range/Performance"}
,{"P2461","Particulate Filter Pressure Sensor B Circuit High"}
,{"P2462","Particulate Filter Pressure Sensor B Circuit Intermittent/Erratic"}
,{"P2463","Particulate Filter Restriction - Soot Accumulation"}
,{"P2478","Gas Temperature Out of Range Bank 1 Sensor 1"}
,{"P2479","Gas Temperature Out of Range Bank 1 Sensor 2"}
,{"P247A","Gas Temperature Out of Range Bank 1 Sensor 3"}
,{"P247B","Gas Temperature Out of Range Bank 1 Sensor 4"}
,{"P247C","Gas Temperature Out of Range Bank 2 Sensor 1"}
,{"P247D","Gas Temperature Out of Range Bank 2 Sensor 2"}
,{"P247E","Gas Temperature Out of Range Bank 2 Sensor 3"}
,{"P247F","Gas Temperature Out of Range Bank 2 Sensor 4"}
,{"P248A","P24FF ISO/SAE Reserved"}
,{"P2300","Ignition Coil A Primary Control Circuit Low"}
,{"P2301","Ignition Coil A Primary Control Circuit High"}
,{"P2302","Ignition Coil A Secondary Circuit"}
,{"P2303","Ignition Coil B Primary Control Circuit Low"}
,{"P2304","Ignition Coil B Primary Control Circuit High"}
,{"P2305","Ignition Coil B Secondary Circuit"}
,{"P2306","Ignition Coil C Primary Control Circuit Low"}
,{"P2307","Ignition Coil C Primary Control Circuit High"}
,{"P2308","Ignition Coil C Secondary Circuit"}
,{"P2309","Ignition Coil D Primary Control Circuit Low"}
,{"P2310","Ignition Coil D Primary Control Circuit High"}
,{"P2311","Ignition Coil D Secondary Circuit"}
,{"P2312","Ignition Coil E Primary Control Circuit Low"}
,{"P2313","Ignition Coil E Primary Control Circuit High"}
,{"P2314","Ignition Coil E Secondary Circuit"}
,{"P2315","Ignition Coil F Primary Control Circuit Low"}
,{"P2316","Ignition Coil F Primary Control Circuit High"}
,{"P2317","Ignition Coil F Secondary Circuit"}
,{"P2318","Ignition Coil G Primary Control Circuit Low"}
,{"P2319","Ignition Coil G Primary Control Circuit High"}
,{"P231A","P231B, P231C, P231D, P231E, P231F ISO/SAE Reserved"}
,{"P2320","Ignition Coil G Secondary Circuit"}
,{"P2321","Ignition Coil H Primary Control Circuit Low"}
,{"P2322","Ignition Coil H Primary Control Circuit High"}
,{"P2323","Ignition Coil H Secondary Circuit"}
,{"P2324","Ignition Coil I Primary Control Circuit Low"}
,{"P2325","Ignition Coil I Primary Control Circuit High"}
,{"P2326","Ignition Coil I Secondary Circuit"}
,{"P2327","Ignition Coil J Primary Control Circuit Low"}
,{"P2328","Ignition Coil J Primary Control Circuit High"}
,{"P2329","Ignition Coil J Secondary Circuit"}
,{"P2330","Ignition Coil K Primary Control Circuit Low"}
,{"P2331","Ignition Coil K Primary Control Circuit High"}
,{"P2332","Ignition Coil K Secondary Circuit"}
,{"P2333","Ignition Coil L Primary Control Circuit Low"}
,{"P2334","Ignition Coil L Primary Control Circuit High"}
,{"P2335","Ignition Coil L Secondary Circuit"}
,{"P2336","1 Above Knock Threshold"}
,{"P2337","2 Above Knock Threshold"}
,{"P2338","3 Above Knock Threshold"}
,{"P2339","4 Above Knock Threshold"}
,{"P233A","P233B, P233C, P233D, P233E, P233F ISO/SAE Reserved"}
,{"P2340","5 Above Knock Threshold"}
,{"P2341","6 Above Knock Threshold"}
,{"P2342","7 Above Knock Threshold"}
,{"P2343","8 Above Knock Threshold"}
,{"P2344","9 Above Knock Threshold"}
,{"P2345","10 Above Knock Threshold"}
,{"P2346","11 Above Knock Threshold"}
,{"P2347","12 Above Knock Threshold"}
,{"P2348","P23FF ISO/SAE Reserved"}
,{"P2200","Sensor Circuit Bank 1"}
,{"P2201","Sensor Circuit Range/Performance Bank 1"}
,{"P2202","Sensor Circuit Low Bank 1"}
,{"P2203","Sensor Circuit High Bank 1"}
,{"P2204","Sensor Circuit Intermittent Bank 1"}
,{"P2205","Sensor Heater Control Circuit/Open Bank 1"}
,{"P2206","Sensor Heater Control Circuit Low Bank 1"}
,{"P2209","Sensor Heater Sense Circuit Range/Performance Bank 1"}
,{"P220A","P220B, P220C, P220D, P220E, P220F ISO/SAE Reserved"}
,{"P2211","Sensor Heater Sense Circuit High Bank 1"}
,{"P2212","Sensor Heater Sense Circuit Intermittent Bank 1"}
,{"P2213","Sensor Circuit Bank 2"}
,{"P2214","Sensor Circuit Range/Performance Bank 2"}
,{"P2219","Sensor Heater Control Circuit Low Bank 2"}
,{"P221A","P221B, P221C, P221D, P221E, P221F ISO/SAE Reserved"}
,{"P2222","Sensor Heater Sense Circuit Range/Performance Bank 2"}
,{"P2225","Sensor Heater Sense Circuit Intermittent Bank 2"}
,{"P2226","Pressure Sensor A Circuit"}
,{"P2227","Pressure Sensor A Circuit Range/Performance"}
,{"P222A","Pressure Sensor B Circuit"}
,{"P222E","Pressure Sensor B Circuit Intermittent/Erratic"}
,{"P222F","Pressure Sensor A / B Correlation"}
,{"P2230","Pressure Sensor A Circuit Intermittent/Erratic"}
,{"P2231","Sensor Signal Circuit Shorted to Heater Circuit Bank 1 Sensor 1"}
,{"P2234","Sensor Signal Circuit Shorted to Heater Circuit Bank 2 Sensor 1"}
,{"P2235","Sensor Signal Circuit Shorted to Heater Circuit Bank 2 Sensor 2"}
,{"P2237","Sensor Positive Current Control Circuit/Open Bank 1 Sensor 1"}
,{"P2241","Sensor Positive Current Control Circuit Low Bank 2 Sensor 1"}
,{"P2242","Sensor Positive Current Control Circuit High Bank 2 Sensor 1"}
,{"P2243","Sensor Reference Voltage Circuit/Open Bank 1 Sensor 1"}
,{"P2244","Sensor Reference Voltage Performance Bank 1 Sensor 1"}
,{"P2245","Sensor Reference Voltage Circuit Low Bank 1 Sensor 1"}
,{"P2246","Sensor Reference Voltage Circuit High Bank 1 Sensor 1"}
,{"P2247","Sensor Reference Voltage Circuit/Open Bank 2 Sensor 1"}
,{"P2248","Sensor Reference Voltage Performance Bank 2 Sensor 1"}
,{"P2249","Sensor Reference Voltage Circuit Low Bank 2 Sensor 1"}
,{"P224A","P224B, P224C, P224D, P224E, P224F ISO/SAE Reserved"}
,{"P2250","Sensor Reference Voltage Circuit High Bank 2 Sensor 1"}
,{"P2251","Sensor Negative Current Control Circuit/Open Bank 1 Sensor 1"}
,{"P2252","Sensor Negative Current Control Circuit Low Bank 1 Sensor 1"}
,{"P2253","Sensor Negative Current Control Circuit High Bank 1 Sensor 1"}
,{"P2254","Sensor Negative Current Control Circuit/Open Bank 2 Sensor 1"}
,{"P2255","Sensor Negative Current Control Circuit Low Bank 2 Sensor 1"}
,{"P2256","Sensor Negative Current Control Circuit High Bank 2 Sensor 1"}
,{"P2257","Air Injection System Control A Circuit Low"}
,{"P2258","Air Injection System Control A Circuit High"}
,{"P2259","Air Injection System Control B Circuit Low"}
,{"P225A","P225B, P225C, P225D, P225E, P225F ISO/SAE Reserved"}
,{"P2260","Air Injection System Control B Circuit High"}
,{"P2263","Boost System Performance"}
,{"P2265","in Fuel Sensor Circuit Range/Performance"}
,{"P2266","in Fuel Sensor Circuit Low"}
,{"P2267","in Fuel Sensor Circuit High"}
,{"P2268","in Fuel Sensor Circuit Intermittent"}
,{"P226A","in Fuel Lamp Control Circuit"}
,{"P2271","Sensor Signal Biased/Stuck Rich Bank 1 Sensor 2"}
,{"P2273","Sensor Signal Biased/Stuck Rich Bank 2 Sensor 2"}
,{"P2274","Sensor Signal Biased/Stuck Lean Bank 1 Sensor 3"}
,{"P227A","P227B, P227C, P227D, P227E, P227F ISO/SAE Reserved"}
,{"P2280","Flow Restriction/Air Leak Between Air Filter and MAF"}
,{"P2283","Control Pressure Sensor Circuit"}
,{"P2284","Control Pressure Sensor Circuit Range/Performance"}
,{"P2287","Control Pressure Sensor Circuit Intermittent"}
,{"P2288","Control Pressure Too High"}
,{"P2289","Control Pressure Too High - Engine Off"}
,{"P228C","Pressure Regulator 1 Exceeded Control Limits - Pressure Too Low"}
,{"P228F","Pressure Regulator 1 Exceeded Learning Limits - Too High"}
,{"P2290","Control Pressure Too Low"}
,{"P2291","Control Pressure Too Low - Engine Cranking"}
,{"P229A","Pressure Regulator 2 Exceeded Control Limits - Pressure Too Low"}
,{"P229C","Pressure Regulator 2 Exceeded Learning Limits - Too Low"}
,{"P229E","P22FF ISO/SAE Reserved"}
,{"P2100","Actuator A Control Motor Circuit/Open"}
,{"P2101","Actuator A Control Motor Circuit Range/Performance"}
,{"P2102","Actuator A Control Motor Circuit Low"}
,{"P2103","Actuator A Control Motor Circuit High"}
,{"P2104","Actuator Control System - Forced Idle"}
,{"P2105","Actuator Control System - Forced Engine Shutdown"}
,{"P2107","Actuator Control Module Processor"}
,{"P2108","Actuator Control Module Performance"}
,{"P210A","Actuator B Control Motor Circuit/Open"}
,{"P210C","Actuator B Control Motor Circuit Low"}
,{"P210D","Actuator B Control Motor Circuit High"}
,{"P210E","Position Sensor/Switch C / F Voltage Correlation"}
,{"P210F","Reserved"}
,{"P2110","Actuator Control System - Forced Limited RPM"}
,{"P2111","Actuator Control System - Stuck Open"}
,{"P2112","Actuator Control System - Stuck Closed"}
,{"P2113","Position Sensor B Minimum Stop Performance"}
,{"P2114","Position Sensor C Minimum Stop Performance"}
,{"P2115","Position Sensor D Minimum Stop Performance"}
,{"P2116","Position Sensor E Minimum Stop Performance"}
,{"P2118","Actuator Control Motor Current Range/Performance"}
,{"P211A","P211B, P211C, P211D, P211E, P211F ISO/SAE Reserved"}
,{"P2120","Position Sensor/Switch D Circuit"}
,{"P2126","Position Sensor/Switch E Circuit Range/Performance"}
,{"P212A","Position Sensor/Switch G Circuit"}
,{"P212D","Position Sensor/Switch G Circuit High"}
,{"P2130","Position Sensor/Switch F Circuit"}
,{"P2132","Position Sensor/Switch F Circuit Low"}
,{"P2135","Throttle/Pedal Pos Sensor/Switch A / B Voltage Correlation"}
,{"P2136","Throttle/Pedal Pos Sensor/Switch A / C Voltage Correlation"}
,{"P2137","Throttle/Pedal Pos Sensor/Switch B / C Voltage Correlation"}
,{"P2138","Throttle/Pedal Pos Sensor/Switch D / E Voltage Correlation"}
,{"P2139","Throttle/Pedal Pos Sensor/Switch D / F Voltage Correlation"}
,{"P213A","Gas Recirculation Throttle Control Circuit B /Open"}
,{"P213B","Gas Recirculation Throttle Control Circuit B Range/Performance"}
,{"P2140","Throttle/Pedal Pos Sensor/Switch E / F Voltage Correlation"}
,{"P2141","Gas Recirculation Throttle Control Circuit A Low"}
,{"P2142","Gas Recirculation Throttle Control Circuit A High"}
,{"P2143","Gas Recirculation Vent Control Circuit/Open"}
,{"P2144","Gas Recirculation Vent Control Circuit Low"}
,{"P2145","Gas Recirculation Vent Control Circuit High"}
,{"P2147","Injector Group A Supply Voltage Circuit Low"}
,{"P2149","Injector Group B Supply Voltage Circuit/Open"}
,{"P214A","P214B, P214C, P214D, P214E, P214F ISO/SAE Reserved"}
,{"P2150","Injector Group B Supply Voltage Circuit Low"}
,{"P2151","Injector Group B Supply Voltage Circuit High"}
,{"P2153","Injector Group C Supply Voltage Circuit Low"}
,{"P2154","Injector Group C Supply Voltage Circuit High"}
,{"P2159","Speed Sensor B Range/Performance"}
,{"P215B","Speed - Output Shaft Speed Correlation"}
,{"P215D","P215E, P215F ISO/SAE Reserved"}
,{"P2160","Speed Sensor B Circuit Low"}
,{"P2163","Position Sensor A Maximum Stop Performance"}
,{"P2164","Position Sensor B Maximum Stop Performance"}
,{"P2165","Position Sensor C Maximum Stop Performance"}
,{"P2167","Position Sensor E Maximum Stop Performance"}
,{"P216C","Injector Group E Supply Voltage Circuit High"}
,{"P216E","Injector Group F Supply Voltage Circuit Low"}
,{"P216F","Injector Group F Supply Voltage Circuit High"}
,{"P2172","Actuator Control System - Sudden High Air Flow Detected"}
,{"P2173","Actuator Control System - High Air Flow Detected"}
,{"P2174","Actuator Control System - Sudden Low Air Flow Detected"}
,{"P2175","Actuator Control System - Low Air Flow Detected"}
,{"P2177","System Too Lean Off Idle Bank 1"}
,{"P2178","System Too Rich Off Idle Bank 1"}
,{"P2179","System Too Lean Off Idle Bank 2"}
,{"P217B","Injector Group G Supply Voltage Circuit Low"}
,{"P217C","Injector Group G Supply Voltage Circuit High"}
,{"P217D","Injector Group H Supply Voltage Circuit/Open"}
,{"P217E","Injector Group H Supply Voltage Circuit Low"}
,{"P217F","Injector Group H Supply Voltage Circuit High"}
,{"P2180","System Too Rich Off Idle Bank 2"}
,{"P2181","Cooling System Performance"}
,{"P2182","Engine Coolant Temperature Sensor 2 Circuit"}
,{"P2183","Engine Coolant Temperature Sensor 2 Circuit Range/Performance"}
,{"P2184","Engine Coolant Temperature Sensor 2 Circuit Low"}
,{"P2185","Engine Coolant Temperature Sensor 2 Circuit High"}
,{"P2186","Engine Coolant Temperature Sensor 2 Circuit Interm/Erratic"}
,{"P2187","System Too Lean at Idle Bank 1"}
,{"P2188","System Too Rich at Idle Bank 1"}
,{"P2189","System Too Lean at Idle Bank 2"}
,{"P218A","P218B, P218C, P218D, P218E, P218F ISO/SAE Reserved"}
,{"P2190","System Too Rich at Idle Bank 2"}
,{"P2191","System Too Lean at Higher Load Bank 1"}
,{"P2192","System Too Rich at Higher Load Bank 1"}
,{"P2193","System Too Lean at Higher Load Bank 2"}
,{"P2194","System Too Rich at Higher Load Bank 2"}
,{"P2195","O2 Sensor Signal Stuck Lean Bank 1 Sensor 1"}
,{"P2196","O2 Sensor Signal Stuck Rich Bank 1 Sensor 1"}
,{"P2197","O2 Sensor Signal Stuck Lean Bank 2 Sensor 1"}
,{"P2198","O2 Sensor Signal Stuck Rich Bank 2 Sensor 1"}
,{"P2199","Air Temperature Sensor 1/2 Correlation"}
,{"P219A","Bank 1 Air/Fuel Ratio Imbalance"}
,{"P219B","Bank 2 Air/Fuel Ratio Imbalance"}
,{"P219C","Cylinder #1 Imbalance Error"}
,{"P219D","Cylinder #2 Imbalance Error"}
,{"P219E","Cylinder #3 Imbalance Error"}
,{"P219F","Cylinder #4 Imbalance Error"}
,{"P21AA","P21FF ISO/SAE Reserved"}
,{"P2000","NOx Adsorber Efficiency Below Threshold Bank 1"}
,{"P2001","NOx Adsorber Efficiency Below Threshold Bank 2"}
,{"P2002","Diesel Particulate Filter Efficiency Below Threshold Bank 1"}
,{"P2003","Diesel Particulate Filter Efficiency Below Threshold Bank 2"}
,{"P2004","Intake Manifold Runner Control Stuck Open Bank 1"}
,{"P2005","Intake Manifold Runner Control Stuck Open Bank 2"}
,{"P2006","Intake Manifold Runner Control Stuck Closed Bank 1"}
,{"P2007","Intake Manifold Runner Control Stuck Closed Bank 2"}
,{"P2008","Intake Manifold Runner Control Circuit/Open Bank 1"}
,{"P2009","Intake Manifold Runner Control Circuit Low Bank 1"}
,{"P200A","Intake Manifold Runner Performance Bank 1"}
,{"P200B","Intake Manifold Runner Performance Bank 2"}
,{"P200C","Diesel Particulate Filter Over Temperature Bank 1"}
,{"P200D","Diesel Particulate Filter Over Temperature Bank 2"}
,{"P200E","Catalyst System Over Temperature Bank 1"}
,{"P200F","Catalyst System Over Temperature Bank 2"}
,{"P2010","Intake Manifold Runner Control Circuit High Bank 1"}
,{"P2011","Intake Manifold Runner Control Circuit/Open Bank 2"}
,{"P2012","Intake Manifold Runner Control Circuit Low Bank 2"}
,{"P2013","Intake Manifold Runner Control Circuit High Bank 2"}
,{"P2014","Intake Manifold Runner Position Sensor/Switch Circuit Bank 1"}
,{"P2015","Intake Manifold Runner Position Sensor/Switch Circuit Range/Performance Bank 1"}
,{"P2016","Intake Manifold Runner Position Sensor/Switch Circuit Low Bank 1"}
,{"P2017","Intake Manifold Runner Position Sensor/Switch Circuit High Bank 1"}
,{"P2018","Intake Manifold Runner Position Sensor/Switch Circuit Intermittent Bank 1"}
,{"P2019","Intake Manifold Runner Position Sensor/Switch Circuit Bank 2"}
,{"P201A","Injection Valve Circuit Range/Performance Bank 2 Unit 1"}
,{"P201B","P201C, P201D, P201E, P201F ISO/SAE Reserved"}
,{"P2020","Intake Manifold Runner Position Sensor/Switch Circuit Range/Performance Bank 2"}
,{"P2021","Intake Manifold Runner Position Sensor/Switch Circuit Low Bank 2"}
,{"P2022","Intake Manifold Runner Position Sensor/Switch Circuit High Bank 2"}
,{"P2023","Intake Manifold Runner Position Sensor/Switch Circuit Intermittent Bank 2"}
,{"P2024","Evaporative Emissions (EVAP) Fuel Vapor Temperature Sensor Circuit"}
,{"P2025","Evaporative Emissions (EVAP) Fuel Vapor Temperature Sensor Performance"}
,{"P2026","Evaporative Emissions (EVAP) Fuel Vapor Temperature Sensor Circuit Low Voltage"}
,{"P2027","Evaporative Emissions (EVAP) Fuel Vapor Temperature Sensor Circuit High Voltage"}
,{"P2028","Evaporative Emissions (EVAP) Fuel Vapor Temperature Sensor Circuit Intermittent"}
,{"P2029","Fired Heater Disabled"}
,{"P202A","Tank Heater Control Circuit/Open"}
,{"P202B","Tank Heater Control Circuit Low"}
,{"P202C","Tank Heater Control Circuit High"}
,{"P202D","Leakage"}
,{"P202E","Injection Valve Circuit Range/Performance Bank 1 Unit 1"}
,{"P202F","Supply Control Circuit Range/Performance"}
,{"P2030","Fired Heater Performance"}
,{"P2031","Exhaust Gas Temperature Sensor Circuit Bank 1 Sensor 2"}
,{"P2032","Exhaust Gas Temperature Sensor Circuit Low Bank 1 Sensor 2"}
,{"P2033","Exhaust Gas Temperature Sensor Circuit High Bank 1 Sensor 2"}
,{"P2034","Exhaust Gas Temperature Sensor Circuit Bank 2 Sensor 2"}
,{"P2035","Exhaust Gas Temperature Sensor Circuit Low Bank 2 Sensor 2"}
,{"P2036","Exhaust Gas Temperature Sensor Circuit High Bank 2 Sensor 2"}
,{"P2037","Injection Air Pressure Sensor A Circuit"}
,{"P2038","Injection Air Pressure Sensor A Circuit Range/Performance"}
,{"P2039","Injection Air Pressure Sensor A Circuit Low"}
,{"P203A","Reductant Level Sensor Circuit"}
,{"P203B","Reductant Level Sensor Circuit Range/Performance"}
,{"P203C","Reductant Level Sensor Circuit Low"}
,{"P203D","Reductant Level Sensor Circuit High"}
,{"P203E","Reductant Level Sensor Circuit Intermittent/Erratic"}
,{"P203F","Reductant Level Too Low"}
,{"P2040","Injection Air Pressure Sensor A Circuit High"}
,{"P2041","Injection Air Pressure Sensor A Circuit Intermittent"}
,{"P2042","Temperature Sensor Circuit"}
,{"P2043","Temperature Sensor Circuit Range/Performance"}
,{"P2044","Temperature Sensor Circuit Low"}
,{"P2045","Temperature Sensor Circuit High"}
,{"P2046","Temperature Sensor Circuit Intermittent"}
,{"P2047","Reductant Injection Valve Circuit/Open Bank 1 Unit 1"}
,{"P2048","Reductant Injection Valve Circuit Low Bank 1 Unit 1"}
,{"P2049","Reductant Injection Valve Circuit High Bank 1 Unit 1"}
,{"P204A","Pressure Sensor Circuit"}
,{"P204B","Pressure Sensor Circuit Range/Performance"}
,{"P204C","Pressure Sensor Circuit Low"}
,{"P204D","Pressure Sensor Circuit High"}
,{"P204E","Pressure Sensor Circuit Intermittent/Erratic"}
,{"P204F","System Performance Bank 1"}
,{"P2050","Reductant Injection Valve Circuit/Open Bank 2 Unit 1"}
,{"P2051","Reductant Injection Valve Circuit Low Bank 2 Unit 1"}
,{"P2052","Reductant Injection Valve Circuit High Bank 2 Unit 1"}
,{"P2053","Reductant Injection Valve Circuit/Open Bank 1 Unit 2"}
,{"P2054","Reductant Injection Valve Circuit Low Bank 1 Unit 2"}
,{"P2055","Reductant Injection Valve Circuit High Bank 1 Unit 2"}
,{"P2056","Reductant Injection Valve Circuit/Open Bank 2 Unit 2"}
,{"P2057","Reductant Injection Valve Circuit Low Bank 2 Unit 2"}
,{"P2058","Reductant Injection Valve Circuit High Bank 2 Unit 2"}
,{"P2059","Injection Air Pump Control Circuit/Open"}
,{"P205A","Tank Temperature Sensor Circuit"}
,{"P205B","Tank Temperature Sensor Circuit Range/Performance"}
,{"P205C","Tank Temperature Sensor Circuit Low"}
,{"P205D","Tank Temperature Sensor Circuit High"}
,{"P205E","Tank Temperature Sensor Circuit Intermittent/Erratic"}
,{"P205F","System Performance Bank 2"}
,{"P2060","Injection Air Pump Control Circuit Low"}
,{"P2061","Injection Air Pump Control Circuit High"}
,{"P2062","Supply Control Circuit/Open"}
,{"P2063","Supply Control Circuit Low"}
,{"P2064","Supply Control Circuit High"}
,{"P2065","Fuel Level Sensor B Circuit"}
,{"P2066","Fuel Level Sensor B Circuit Performance"}
,{"P2067","Fuel Level Sensor B Circuit Low"}
,{"P2068","Fuel Level Sensor B Circuit High"}
,{"P2069","Fuel Level Sensor B Circuit Intermittent"}
,{"P206E","Manifold Tuning (IMT) Valve Stuck Open Bank 2"}
,{"P206F","Manifold Tuning (IMT) Valve Stuck Closed Bank 2"}
,{"P2070","Manifold Tuning (IMT) Valve Stuck Open Bank 1"}
,{"P2071","Manifold Tuning (IMT) Valve Stuck Closed Bank 1"}
,{"P2080","Exhaust Gas Temperature Sensor Circuit Range/Performance Bank 1 Sensor 1"}
,{"P2081","Exhaust Gas Temperature Sensor Circuit Intermittent Bank 1 Sensor 1"}
,{"P2082","Exhaust Gas Temperature Sensor Circuit Range/Performance Bank 2 Sensor 1"}
,{"P2083","Exhaust Gas Temperature Sensor Circuit Intermittent Bank 2 Sensor 1"}
,{"P2084","Exhaust Gas Temperature Sensor Circuit Range/Performance Bank 1 Sensor 2"}
,{"P2085","Exhaust Gas Temperature Sensor Circuit Intermittent Bank 1 Sensor 2"}
,{"P2086","Exhaust Gas Temperature Sensor Circuit Range/Performance Bank 2 Sensor 2"}
,{"P2087","Exhaust Gas Temperature Sensor Circuit Intermittent Bank 2 Sensor 2"}
,{"P2088","A Camshaft Position Actuator Control Circuit Low Bank 1"}
,{"P2089","A Camshaft Position Actuator Control Circuit High Bank 1"}
,{"P2090","B Camshaft Position Actuator Control Circuit Low Bank 1"}
,{"P2091","B Camshaft Position Actuator Control Circuit High Bank 1"}
,{"P2092","A Camshaft Position Actuator Control Circuit Low Bank 2"}
,{"P2093","A Camshaft Position Actuator Control Circuit High Bank 2"}
,{"P2094","B Camshaft Position Actuator Control Circuit Low Bank 2"}
,{"P2095","B Camshaft Position Actuator Control Circuit High Bank 2"}
,{"P2096","Post Catalyst Fuel Trim System Too Lean Bank 1"}
,{"P2097","Post Catalyst Fuel Trim System Too Rich Bank 1"}
,{"P2098","Post Catalyst Fuel Trim System Too Lean Bank 2"}
,{"P2099","Post Catalyst Fuel Trim System Too Rich Bank 2"}
,{"P209A","Injection Air Pressure Sensor B Circuit"}
,{"P209B","Injection Air Pressure Sensor B Circuit Range/Performance"}
,{"P209C","Reductant Injection Air Pressure Sensor B Circuit Low"}
,{"P209D","Reductant Injection Air Pressure Sensor B Circuit High"}
,{"P209E","Reductant Injection Air Pressure Sensor A / B Correlation"}
,{"P20A0","Reductant Purge Control Valve Circuit /Open"}
,{"P20A1","Reductant Purge Control Valve Performance"}
,{"P20A2","Reductant Purge Control Valve Circuit Low"}
,{"P20A3","Reductant Purge Control Valve Circuit High"}
,{"P20A4","Reductant Purge Control Valve Stuck Open"}
,{"P20A5","Reductant Purge Control Valve Stuck Closed"}
,{"P20B9","Reductant Heater A Control Circuit/Open"}
,{"P20BA","Reductant Heater A Control Circuit Performance"}
,{"P20BB","Reductant Heater A Control Circuit Low"}
,{"P20BC","Reductant Heater A Control Circuit High"}
,{"P20BD","Reductant Heater B Control Circuit/Open"}
,{"P20BE","Reductant Heater B Control Circuit Performance"}
,{"P20BF","Reductant Heater B Control Circuit Low"}
,{"P20C0","Reductant Heater B Control Circuit High"}
,{"P20C1","Reductant Heater C Control Circuit/Open"}
,{"P20C2","Reductant Heater C Control Circuit Performance"}
,{"P20C3","Reductant Heater C Control Circuit Low"}
,{"P20C4","Reductant Heater C Control Circuit High"}
,{"P20C5","Reductant Heater D Control Circuit/Open"}
,{"P20C6","Reductant Heater D Control Circuit Performance"}
,{"P20C7","Reductant Heater D Control Circuit Low"}
,{"P20C8","Reductant Heater D Control Circuit High"}
,{"P20CB","Aftertreatment Fuel Injector A Control Circuit/Open"}
,{"P20CC","Aftertreatment Fuel Injector A Control Performance"}
,{"P20CD","Aftertreatment Fuel Injector A Control Circuit Low"}
,{"P20CE","Aftertreatment Fuel Injector A Control Circuit High"}
,{"P20CF","Aftertreatment Fuel Injector A Stuck Open"}
,{"P20D0","Aftertreatment Fuel Injector A Stuck Closed"}
,{"P20D1","Aftertreatment Fuel Injector B Control Circuit/Open"}
,{"P20D2","Aftertreatment Fuel Injector B Control Performance"}
,{"P20D3","Aftertreatment Fuel Injector B Control Circuit Low"}
,{"P20D4","Aftertreatment Fuel Injector B Control Circuit High"}
,{"P20D5","Aftertreatment Fuel Injector B Stuck Open"}
,{"P20D6","Aftertreatment Fuel Injector B Stuck Closed"}
,{"P20D7","Aftertreatment Fuel Supply Control Circuit/Open"}
,{"P20D8","Aftertreatment Fuel Supply Control Performance"}
,{"P20D9","Aftertreatment Fuel Supply Control Circuit Low"}
,{"P20DA","Aftertreatment Fuel Supply Control Circuit High"}
,{"P20DB","Aftertreatment Fuel Supply Control Stuck Open"}
,{"P20DC","Aftertreatment Fuel Supply Control Stuck Closed"}
,{"P20DD","Aftertreatment Fuel Pressure Sensor Circuit"}
,{"P20DE","Aftertreatment Fuel Pressure Sensor Circuit Range/Performance"}
,{"P20DF","Aftertreatment Fuel Pressure Sensor Circuit Low"}
,{"P20E0","Aftertreatment Fuel Pressure Sensor Circuit High"}
,{"P20E1","Aftertreatment Fuel Pressure Sensor Circuit Intermittent/Erratic"}
,{"P20E6","Injection Air Pressure Too Low"}
,{"P20E7","Injection Air Pressure Too High"}
,{"P20EC","SCR NOx Catalyst - Over Temperature Bank 1"}
,{"P20ED","SCR NOx Pre-Catalyst - Over Temperature Bank 1"}
,{"P20EE","SCR NOx Catalyst Efficiency Below Threshold Bank 1"}
,{"P20EF","SCR NOx Pre- Catalyst Efficiency Below Threshold Bank 1"}
,{"P20F0","SCR NOx Catalyst - Over Temperature Bank 2"}
,{"P20F1","SCR NOx Pre-Catalyst - Over Temperature Bank 2"}
,{"P20F2","SCR NOx Catalyst Efficiency Below Threshold Bank 2"}
,{"P20F3","SCR NOx Pre- Catalyst Efficiency Below Threshold Bank 2"}
,{"P20F6","Injection Valve Stuck Open Bank 1 Unit 1"}
,{"P20F7","Injection Valve Stuck Open Bank 2 Unit 1"}
,{"P20F8","P20FF ISO/SAE Reserved"}
,{"P0C2F","Control Module Drive Motor/Generator - Engine Speed Sensor Performance"}
,{"P0A7E","Battery Pack Over Temperature"}
,{"P0A7F","Battery Pack Deterioration"}
,{"P0900","Actuator Circuit/Open"}
,{"P0901","Actuator Circuit Range/Performance"}
,{"P0902","Actuator Circuit Low"}
,{"P092E","ISO/SAE Reserved"}
,{"P095A","ISO/SAE Reserved"}
,{"P0962","Control Solenoid A Control Circuit Low"}
,{"P0963","Control Solenoid A Control Circuit High"}
,{"P0964","Control Solenoid B Control Circuit/Open"}
,{"P0965","Control Solenoid B Control Circuit Range/Performance"}
,{"P0966","Control Solenoid B Control Circuit Low"}
,{"P0967","Control Solenoid B Control Circuit High"}
,{"P0969","Control Solenoid C Control Circuit Range/Performance"}
,{"P096A","ISO/SAE Reserved"}
,{"P097A","ISO/SAE Reserved"}
,{"P098A","ISO/SAE Reserved"}
,{"P0993","Fluid Pressure Sensor/Switch F Circuit Range/Performance"}
,{"P0995","Fluid Pressure Sensor/Switch F Circuit High"}
,{"P09A0","P09FF ISO/SAE Reserved"}
,{"P0800","Transfer Case Control System (MIL Request)"}
,{"P0801","Reverse Inhibit Control Circuit Malfunction"}
,{"P0802","Transmission Control System MIL Request Circuit/Open"}
,{"P0803","1-4 Upshift (Skip Shift) Solenoid Control Circuit Malfunction"}
,{"P0804","1-4 Upshift (Skip Shift) Lamp Control Circuit Malfunction"}
,{"P0805","Clutch Position Sensor Circuit"}
,{"P0806","Clutch Position Sensor Circuit Range/Performance"}
,{"P0807","Clutch Position Sensor Circuit Low"}
,{"P0808","Clutch Position Sensor Circuit High"}
,{"P0809","Clutch Position Sensor Circuit Intermittent"}
,{"P080A","Clutch Position Not Learned"}
,{"P080E","P080F ISO/SAE Reserved"}
,{"P0810","Clutch Position Control Error"}
,{"P0811","Excessive Clutch Slippage"}
,{"P0812","Reverse Input Circuit"}
,{"P0813","Reverse Output Circuit"}
,{"P0814","Transmission Range Display Circuit"}
,{"P0815","Upshift Switch Circuit"}
,{"P0816","Downshift Switch Circuit"}
,{"P0817","Starter Disable Circuit"}
,{"P0818","Driveline Disconnect Switch Input Circuit"}
,{"P0819","Up and Down Shift Switch to Transmission Range Correlation"}
,{"P081A","Disable Circuit Low"}
,{"P081B","Disable Circuit High"}
,{"P081C","Input Circuit"}
,{"P081D","Neutral Input Circuit"}
,{"P081E","Excessive Clutch B Slippage"}
,{"P081F","Reserved"}
,{"P0829","5-6 Shift Malfunction"}
,{"P0830","Clutch Pedal Switch A Circuit"}
,{"P0831","Clutch Pedal Switch A Circuit Low"}
,{"P0832","Clutch Pedal Switch A Circuit High"}
,{"P0833","Clutch Pedal Switch B Circuit"}
,{"P0834","Clutch Pedal Switch B Circuit Low"}
,{"P0835","Clutch Pedal Switch B Circuit High"}
,{"P0836","Four Wheel Drive (4WD) Switch Circuit"}
,{"P0837","Four Wheel Drive (4WD) Switch Circuit Range/Performance"}
,{"P0838","Four Wheel Drive (4WD) Switch Circuit Low"}
,{"P0839","Four Wheel Drive (4WD) Switch Circuit High"}
,{"P083A","Transmission Fluid Pressure Sensor/Switch G Circuit"}
,{"P083B","Transmission Fluid Pressure Sensor/Switch G Circuit Range/Performance"}
,{"P083C","Transmission Fluid Pressure Sensor/Switch G Circuit Low"}
,{"P083D","Transmission Fluid Pressure Sensor/Switch G Circuit High"}
,{"P083E","Transmission Fluid Pressure Sensor/Switch G Circuit Intermittent"}
,{"P083F","Clutch Pedal Switch A / B Correlation"}
,{"P0840","Transmission Fluid Pressure Sensor/Switch A Circuit"}
,{"P0841","Transmission Fluid Pressure Sensor/Switch A Circuit Range/Performance"}
,{"P0842","Transmission Fluid Pressure Sensor/Switch A Circuit Low"}
,{"P0843","Transmission Fluid Pressure Sensor/Switch A Circuit High"}
,{"P0844","Transmission Fluid Pressure Sensor/Switch A Circuit Intermittent"}
,{"P0845","Transmission Fluid Pressure Sensor/Switch B Circuit"}
,{"P0846","Transmission Fluid Pressure Sensor/Switch B Circuit Range/Performance"}
,{"P0847","Transmission Fluid Pressure Sensor/Switch B Circuit Low"}
,{"P0848","Transmission Fluid Pressure Sensor/Switch B Circuit High"}
,{"P0849","Transmission Fluid Pressure Sensor/Switch B Circuit Intermittent"}
,{"P084A","Transmission Fluid Pressure Sensor/Switch H Circuit"}
,{"P084B","Transmission Fluid Pressure Sensor/Switch H Circuit Range/Performance"}
,{"P084C","Transmission Fluid Pressure Sensor/Switch H Circuit Low"}
,{"P084D","Transmission Fluid Pressure Sensor/Switch H Circuit High"}
,{"P084E","Transmission Fluid Pressure Sensor/Switch H Circuit Intermittent"}
,{"P085F","Reserved"}
,{"P0863","TCM Communication Circuit"}
,{"P0864","TCM Communication Circuit Range/Performance"}
,{"P0865","TCM Communication Circuit Low"}
,{"P0866","TCM Communication Circuit High"}
,{"P086A","ISO/SAE Reserved"}
,{"P0870","Transmission Fluid Pressure Sensor/Switch C Circuit"}
,{"P0871","Transmission Fluid Pressure Sensor/Switch C Circuit Range/Performance"}
,{"P0872","Transmission Fluid Pressure Sensor/Switch C Circuit Low"}
,{"P0873","Transmission Fluid Pressure Sensor/Switch C Circuit High"}
,{"P0874","Transmission Fluid Pressure Sensor/Switch C Circuit Intermittent"}
,{"P0875","Transmission Fluid Pressure Sensor/Switch D Circuit"}
,{"P0876","Transmission Fluid Pressure Sensor/Switch D Circuit Range/Performance"}
,{"P0877","Transmission Fluid Pressure Sensor/Switch D Circuit Low"}
,{"P0878","Transmission Fluid Pressure Sensor/Switch D Circuit High"}
,{"P0879","Transmission Fluid Pressure Sensor/Switch D Circuit Intermittent"}
,{"P087A","P087B, P087C, P087D, P087E, P087F ISO/SAE Reserved"}
,{"P0880","TCM Power Input Signal"}
,{"P0881","TCM Power Input Signal Range/Performance"}
,{"P0882","TCM Power Input Signal Low"}
,{"P0883","TCM Power Input Signal High"}
,{"P0884","TCM Power Input Signal Intermittent"}
,{"P0885","TCM Power Relay Control Circuit/Open"}
,{"P0886","TCM Power Relay Control Circuit Low"}
,{"P0887","TCM Power Relay Control Circuit High"}
,{"P0888","TCM Power Relay Sense Circuit"}
,{"P0889","TCM Power Relay Sense Circuit Range/Performance"}
,{"P088C","ISO/SAE Reserved"}
,{"P0890","TCM Power Relay Sense Circuit Low"}
,{"P0891","TCM Power Relay Sense Circuit High"}
,{"P0892","TCM Power Relay Sense Circuit Intermittent"}
,{"P0893","Multiple Gears Engaged"}
,{"P0894","Transmission Component Slipping"}
,{"P0895","Shift Time Too Short"}
,{"P0896","Shift Time Too Long"}
,{"P089A","P08FF ISO/SAE Reserved"}
,{"P0700","Transmission Control System Malfunction"}
,{"P0701","Transmission Control System Range/Performance"}
,{"P0702","Transmission Control System Electrical"}
,{"P0703","Torque Converter/Brake Switch B Circuit Malfunction"}
,{"P0704","Clutch Switch Input Circuit Malfunction"}
,{"P0705","Transmission Range Sensor A Circuit malfunction (PRNDL Input)"}
,{"P0706","Transmission Range Sensor A Circuit Range/Performance"}
,{"P0707","Transmission Range Sensor A Circuit Low Input"}
,{"P0708","Transmission Range Sensor A Circuit High Input"}
,{"P0709","Transmission Range Sensor A Circuit Intermittent"}
,{"P070A","Transmission Fluid Level Sensor Circuit"}
,{"P070B","Transmission Fluid Level Sensor Circuit Range/Performance"}
,{"P070C","Transmission Fluid Level Sensor Circuit Low"}
,{"P070D","Transmission Fluid Level Sensor Circuit High"}
,{"P070E","Transmission Fluid Level Sensor Circuit intermittent/Erratic"}
,{"P070F","Transmission Fluid Level Too Low"}
,{"P0710","Transmission Fluid Temperature Sensor A Circuit Malfunction"}
,{"P0711","Transmission Fluid Temperature Sensor A Circuit Range/Performance"}
,{"P0712","Transmission Fluid Temperature Sensor A Circuit Low Input"}
,{"P0713","Transmission Fluid Temperature Sensor A Circuit High Input"}
,{"P0714","Transmission Fluid Temperature Sensor A Circuit Intermittent"}
,{"P0715","Input/Turbine Speed Sensor A Circuit Malfunction"}
,{"P0716","Input/Turbine Speed Sensor A Circuit Range/Performance"}
,{"P0717","Input/Turbine Speed Sensor A Circuit No Signal"}
,{"P0718","Input/Turbine Speed Sensor A Circuit Intermittent"}
,{"P0719","Torque Converter/Brake Switch B Circuit Low"}
,{"P071A","Transmission Mode Switch A Circuit"}
,{"P071B","Transmission Mode Switch A Circuit Low"}
,{"P071C","Transmission Mode Switch A Circuit High"}
,{"P071D","Transmission Mode Switch B Circuit"}
,{"P071E","Transmission Mode Switch B Circuit Low"}
,{"P071F","Transmission Mode Switch B Circuit High"}
,{"P0720","Output Speed Sensor Circuit Malfunction"}
,{"P0721","Output Speed Sensor Range/Performance"}
,{"P0722","Output Speed Sensor No Signal"}
,{"P0723","Output Speed Sensor Intermittent"}
,{"P0724","Torque Converter/Brake Switch B Circuit High"}
,{"P0725","Engine Speed input Circuit Malfunction"}
,{"P0726","Engine Speed Input Circuit Range/Performance"}
,{"P0727","Engine Speed Input Circuit No Signal"}
,{"P0728","Engine Speed Input Circuit Intermittent"}
,{"P0729","Gear 6 Incorrect Ratio"}
,{"P072A","Stuck in Neutral"}
,{"P072B","Stuck In Reverse"}
,{"P072C","Stuck in Gear 1"}
,{"P072D","Stuck in Gear 2"}
,{"P072E","Stuck in Gear 3"}
,{"P072F","Stuck in Gear 4"}
,{"P0730","Incorrect Gear Ratio"}
,{"P0731","Gear I Incorrect ratio"}
,{"P0732","Gear 2 Incorrect ratio"}
,{"P0733","Gear 3 Incorrect ratio"}
,{"P0734","Gear 4 Incorrect ratio"}
,{"P0735","Gear 5 Incorrect ratio"}
,{"P0736","Reverse incorrect gear ratio"}
,{"P0737","TCM Engine Speed Output Circuit"}
,{"P0738","TCM Engine Speed Output Circuit Low"}
,{"P0739","TCM Engine Speed Output Circuit High"}
,{"P073A","Stuck in Gear 5"}
,{"P073B","Stuck in Gear 6"}
,{"P073C","Stuck in Gear 7"}
,{"P073D","Unable to Engage Neutral"}
,{"P073E","Unable to Engage Reverse"}
,{"P073F","Unable to Engage Gear 1"}
,{"P0740","Torque Converter Clutch Circuit Malfunction"}
,{"P0741","Torque Converter Clutch Circuit Performance or Stuck Off"}
,{"P0742","Torque Converter Clutch Circuit Stock On"}
,{"P0743","Torque Converter Clutch Circuit Electrical"}
,{"P0744","Torque Converter Clutch Circuit Intermittent"}
,{"P0745","Pressure Control Solenoid A Malfunction"}
,{"P0746","Pressure Control Solenoid A Performance or Stuck Off"}
,{"P0747","Pressure Control Solenoid A Stuck On"}
,{"P0748","Pressure Control Solenoid A Electrical"}
,{"P0749","Pressure Control Solenoid A Intermittent"}
,{"P074A","Unable To Engage Gear 2"}
,{"P074B","Unable To Engage Gear 3"}
,{"P074C","Unable To Engage Gear 4"}
,{"P074D","Unable To Engage Gear 5"}
,{"P074E","Unable To Engage Gear 6"}
,{"P074F","Unable To Engage Gear 7"}
,{"P0750","Shift Solenoid A Malfunction"}
,{"P0751","Shift Solenoid A Performance or Stuck Off"}
,{"P0752","Shift Solenoid A Stuck On"}
,{"P0753","Shift Solenoid A Electrical"}
,{"P0754","Shift Solenoid A Intermittent"}
,{"P0755","Shift Solenoid B Malfunction"}
,{"P0756","Shift Solenoid B Performance or Stock Off"}
,{"P0757","Shift Solenoid B Stuck On"}
,{"P0758","Shift Solenoid B Electrical"}
,{"P0759","Shift Solenoid B Intermittent"}
,{"P075A","Shift Solenoid G Malfunction"}
,{"P075B","Shift Solenoid G Performance/Stuck Off"}
,{"P075C","Shift Solenoid G Stuck On"}
,{"P075D","Shift Solenoid G Electrical"}
,{"P075E","Shift Solenoid G Intermittent"}
,{"P075F","Transmission Fluid Level Too High"}
,{"P0760","Shift Solenoid C Malfunction"}
,{"P0761","Shift Solenoid C Performance or Stuck Off"}
,{"P0762","Shift Solenoid C Stuck On"}
,{"P0763","Shift Solenoid C Electrical"}
,{"P0764","Shift Solenoid C Intermittent"}
,{"P0765","Shift Solenoid D Malfunction"}
,{"P0766","Shift Solenoid D Performance or Stuck Off"}
,{"P0767","Shift Solenoid D Stuck On"}
,{"P0768","Shift Solenoid D Electrical"}
,{"P0769","Shift Solenoid D Intermittent"}
,{"P076A","Shift Solenoid H Malfunction"}
,{"P076B","Shift Solenoid H Performance/Stuck Off"}
,{"P076C","Shift Solenoid H Stuck On"}
,{"P076D","Shift Solenoid H Electrical"}
,{"P076E","Shift Solenoid H Intermittent"}
,{"P076F","Gear 7 Incorrect Ratio"}
,{"P0770","Shift Solenoid E Malfunction"}
,{"P0771","Shift Solenoid E Performance or Stuck Off"}
,{"P0772","Shift Solenoid E Stuck On"}
,{"P0773","Shift Solenoid E Electrical"}
,{"P0774","Shift Solenoid E Intermittent"}
,{"P0775","Pressure Control Solenoid B Malfunction"}
,{"P0776","Pressure Control Solenoid B Performance or Stuck Off"}
,{"P0777","Pressure Control Solenoid B Stuck On"}
,{"P0778","Pressure Control Solenoid B Electrical"}
,{"P0779","Pressure Control Solenoid B Intermittent"}
,{"P077A","Speed Sensor Circuit - Loss of Direction Signal"}
,{"P077B","Speed Sensor Circuit - Direction Error"}
,{"P077C","P077D, P077E, P077F ISO/SAE Reserved"}
,{"P0780","Shift Malfunction"}
,{"P0781","1-2 Shift Malfunction"}
,{"P0782","2-3 Shift Malfunction"}
,{"P0783","3-4 Shift Malfunction"}
,{"P0784","4-5 Shift Malfunction"}
,{"P0785","Shift Timing Solenoid A Malfunction"}
,{"P0786","Shift Timing Solenoid A Range/Performance"}
,{"P0787","Shift Timing Solenoid A Low"}
,{"P0788","Shift Timing Solenoid A High"}
,{"P0789","Shift Timing Solenoid A Intermittent"}
,{"P078A","Shift Timing Solenoid B Malfunction"}
,{"P078B","Shift Timing Solenoid B Range/Performance"}
,{"P078C","Shift Timing Solenoid B Low"}
,{"P078D","Shift Timing Solenoid B High"}
,{"P078E","Shift Timing Solenoid B Intermittent"}
,{"P078F","ISO/SAE Reserved"}
,{"P0790","Normal/Performance Switch Circuit Malfunction"}
,{"P0791","Intermediate Shaft Speed Sensor A Circuit"}
,{"P0792","Intermediate Shaft Speed Sensor A Circuit Range/Performance"}
,{"P0793","Intermediate Shaft Speed Sensor A Circuit No Signal"}
,{"P0794","Intermediate Shaft Speed Sensor A Circuit Intermittent"}
,{"P0795","Pressure Control Solenoid C Malfunction"}
,{"P0796","Pressure Control Solenoid C Performance or Stuck off"}
,{"P0797","Pressure Control Solenoid C Stuck On"}
,{"P0798","Pressure Control Solenoid C Electrical"}
,{"P0799","Pressure Control Solenoid C Intermittent"}
,{"P079A","Transmission Friction Element A Slip Detected"}
,{"P079B","Transmission Friction Element B Slip Detected"}
,{"P079C","Transmission Friction Element C Slip Detected"}
,{"P079D","Transmission Friction Element D Slip Detected"}
,{"P079E","Transmission Friction Element E Slip Detected"}
,{"P079F","Transmission Friction Element F Slip Detected"}
,{"P07A0","Transmission Friction Element G Slip Detected"}
,{"P07A1","Transmission Friction Element H Slip Detected"}
,{"P07A2","Transmission Friction Element A Performance/Stuck Off"}
,{"P07A3","Transmission Friction Element A Stuck On"}
,{"P07A4","Transmission Friction Element B Performance/Stuck Off"}
,{"P07A5","Transmission Friction Element B Stuck On"}
,{"P07A6","Transmission Friction Element C Performance/Stuck Off"}
,{"P07A7","Transmission Friction Element C Stuck On"}
,{"P07A8","Transmission Friction Element D Performance/Stuck Off"}
,{"P07A9","Transmission Friction Element D Stuck On"}
,{"P07AA","Transmission Friction Element E Performance/Stuck Off"}
,{"P07AB","Transmission Friction Element E Stuck On"}
,{"P07AC","Transmission Friction Element F Performance/Stuck Off"}
,{"P07AD","Transmission Friction Element F Stuck On"}
,{"P07AE","Transmission Friction Element G Performance/Stuck Off"}
,{"P07AF","Transmission Friction Element G Stuck On"}
,{"P07B0","Transmission Friction Element H Performance/Stuck Off"}
,{"P07B1","Transmission Friction Element H Stuck On"}
,{"P07B2","Transmission Park Position Sensor/Switch A Circuit Open"}
,{"P07B3","Transmission Park Position Sensor/Switch A Circuit Low"}
,{"P07B4","Transmission Park Position Sensor/Switch A Circuit High"}
,{"P07B5","Transmission Park Position Sensor/Switch A Circuit Performance/Low"}
,{"P07B6","Transmission Park Position Sensor/Switch A Circuit Performance High"}
,{"P07B7","Transmission Park Position Sensor/Switch A Circuit Intermittent/Erratic"}
,{"P07B8","Transmission Park Position Sensor/Switch B Circuit Open"}
,{"P07B9","Transmission Park Position Sensor/Switch B Circuit Low"}
,{"P07BA","Transmission Park Position Sensor/Switch B Circuit High"}
,{"P07BB","Transmission Park Position Sensor/Switch B Circuit Performance/Low"}
,{"P07BC","Transmission Park Position Sensor/Switch B Circuit Performance High"}
,{"P07BD","Transmission Park Position Sensor/Switch B Circuit Intermittent/Erratic"}
,{"P07BE","Transmission Park Position Sensor/Switch A / B Correlation"}
,{"P07BF","- P07FF ISO/SAE Reserved"}
,{"P0600","Serial Communication Link Malfunction"}
,{"P0601","Control Module Memory Check Sum Error"}
,{"P0602","Control Module Programming Error"}
,{"P0603","Internal Control Module Keep Alive Memory (KAM) Error"}
,{"P0604","Internal Control Module Random Access Memory (RAM) Error"}
,{"P0605","Internal Control Module Read Only Memory (ROM) Error"}
,{"P0606","PCM Processor Fault"}
,{"P0607","Control Module Performance"}
,{"P0608","Control Module VSS Output A Malfunction"}
,{"P0609","Control Module VSS Output B Malfunction"}
,{"P060A","Internal Control Module Monitoring Processor Performance"}
,{"P060B","Internal Control Module A/D Processing Performance"}
,{"P060C","Internal Control Module Main Processor Performance"}
,{"P060D","Internal Control Module Accelerator Pedal Position Performance"}
,{"P060E","Internal Control Module Throttle Position Performance"}
,{"P060F","Internal Control Module Coolant Temperature Performance"}
,{"P0610","Control Module Vehicle Options Error"}
,{"P0611","Fuel Injector Control Module Performance"}
,{"P0612","Fuel Injector Control Module Relay Control"}
,{"P0613","TCM Processor"}
,{"P0614","ECM / TCM Incompatible"}
,{"P0615","Starter Relay Circuit"}
,{"P0616","Starter Relay Circuit Low"}
,{"P0617","Starter Relay Circuit High"}
,{"P0618","Alternative Fuel Control Module KAM Error"}
,{"P0619","Alternative Fuel Control Module RAM/ROM Error"}
,{"P061A","Control Module Torque Performance"}
,{"P061D","Control Module Engine Air Mass Performance"}
,{"P061E","Control Module Brake Signal Performance"}
,{"P0620","Generator Control Circuit Malfunction"}
,{"P0621","Generator Lamp L Control Circuit Malfunction"}
,{"P0622","Generator Field F Control Circuit Malfunction"}
,{"P0623","Generator Lamp Control Circuit"}
,{"P0624","Fuel Cap Lamp Control Circuit"}
,{"P0625","Generator Field/F Terminal Circuit Low"}
,{"P0626","Generator Field/F Terminal Circuit High"}
,{"P0627","Fuel Pump A Control Circuit /Open"}
,{"P0628","Fuel Pump A Control Circuit Low"}
,{"P0629","Fuel Pump A Control Circuit High"}
,{"P062A","Pump A Control Circuit Range/Performance"}
,{"P062B","Internal Control Module Fuel Injector Control Performance"}
,{"P062D","Fuel Injector Driver Circuit Performance Bank 1"}
,{"P062E","Fuel Injector Driver Circuit Performance Bank 2"}
,{"P062F","Internal Control Module EEPROM Error"}
,{"P0630","VIN Not Programmed or Incompatible – ECM/PCM"}
,{"P0631","VIN Not Programmed or Incompatible – TCM"}
,{"P0632","Odometer Not Programmed – ECM/PCM"}
,{"P0633","Immobilizer Key Not Programmed – ECM/PCM"}
,{"P0634","PCM/ECM/TCM Internal Temperature Too High"}
,{"P0635","Power Steering Control Circuit"}
,{"P0636","Power Steering Control Circuit Low"}
,{"P0637","Power Steering Control Circuit High"}
,{"P0638","Throttle Actuator Control Range/Performance (Bank 1)"}
,{"P0639","Throttle Actuator Control Range/Performance (Bank 2)"}
,{"P063A","Voltage Sense Circuit"}
,{"P063B","Voltage Sense Circuit Range/Performance"}
,{"P063C","Voltage Sense Circuit Low"}
,{"P063D","Voltage Sense Circuit High"}
,{"P063E","Configuration Throttle Input Not Present"}
,{"P063F","Configuration Engine Coolant Temperature Input Not Present"}
,{"P0640","Intake Air Heater Control Circuit"}
,{"P0641","Sensor Reference Voltage A Circuit Open"}
,{"P0642","Sensor Reference Voltage A Circuit Low"}
,{"P0643","Sensor Reference Voltage A Circuit High"}
,{"P0644","Driver Display Serial Communication Circuit"}
,{"P0645","A/C Clutch Relay Control Circuit"}
,{"P0646","A/C Clutch Relay Control Circuit Low"}
,{"P0647","A/C Clutch Relay Control Circuit High"}
,{"P0648","Immobilizer Lamp Control Circuit"}
,{"P0649","Speed Control Lamp Control Circuit"}
,{"P064A","Pump Control Module"}
,{"P064B","Control Module"}
,{"P064D","Control Module O2 Sensor Processor Performance Bank 1"}
,{"P064E","Control Module O2 Sensor Processor Performance Bank 2"}
,{"P0650","Malfunction Indicator Lamp (MIL) Control Circuit Malfunction"}
,{"P0651","Sensor Reference Voltage B Circuit Open"}
,{"P0652","Sensor Reference Voltage B Circuit Low"}
,{"P0653","Sensor Reference Voltage B Circuit High"}
,{"P0654","Engine RPM Output Circuit Malfunction"}
,{"P0655","Engine Hot Lamp Output Control Circuit Malfunction"}
,{"P0656","Fuel Level Output Circuit Malfunction"}
,{"P0657","Actuator Supply Voltage A Circuit/Open"}
,{"P0658","Actuator Supply Voltage A Circuit Low"}
,{"P0659","Actuator Supply Voltage A Circuit High"}
,{"P065A","System Performance"}
,{"P065C","Mechanical Performance"}
,{"P0660","Intake Manifold Tuning Valve Control Circuit/Open Bank 1"}
,{"P0661","Intake Manifold Tuning Valve Control Circuit Low Bank 1"}
,{"P0662","Intake Manifold Tuning Valve Control Circuit High Bank 1"}
,{"P0663","Intake Manifold Tuning Valve Control Circuit/Open Bank 2"}
,{"P0664","Intake Manifold Tuning Valve Control Circuit Low Bank 2"}
,{"P0665","Intake Manifold Tuning Valve Control Circuit High Bank 2"}
,{"P0666","PCM/ECM/TCM Internal Temperature Sensor Circuit"}
,{"P0667","PCM/ECM/TCM Internal Temperature Sensor Range/Performance"}
,{"P0668","PCM/ECM/TCM Internal Temperature Sensor Circuit Low"}
,{"P0669","PCM/ECM/TCM Internal Temperature Sensor Circuit High"}
,{"P066A","1 Glow Plug Control Circuit Low"}
,{"P066C","2 Glow Plug Control Circuit Low"}
,{"P066F","3 Glow Plug Control Circuit High"}
,{"P0670","Glow Plug Module Control Circuit"}
,{"P0671","Cylinder 1 Glow Plug Circuit"}
,{"P0672","Cylinder 2 Glow Plug Circuit"}
,{"P0673","Cylinder 3 Glow Plug Circuit"}
,{"P0674","Cylinder 4 Glow Plug Circuit"}
,{"P0675","Cylinder 5 Glow Plug Circuit"}
,{"P0676","Cylinder 6 Glow Plug Circuit"}
,{"P0677","Cylinder 7 Glow Plug Circuit"}
,{"P0678","Cylinder 8 Glow Plug Circuit"}
,{"P0679","Cylinder 9 Glow Plug Circuit"}
,{"P067A","4 Glow Plug Control Circuit Low"}
,{"P067B","4 Glow Plug Control Circuit High"}
,{"P067C","5 Glow Plug Control Circuit Low"}
,{"P067D","5 Glow Plug Control Circuit High"}
,{"P067E","6 Glow Plug Control Circuit Low"}
,{"P0680","Cylinder 10 Glow Plug Circuit"}
,{"P0681","Cylinder 11 Glow Plug Circuit"}
,{"P0682","Cylinder 12 Glow Plug Circuit"}
,{"P0683","Glow Plug Control Module to PCM Communication Circuit"}
,{"P0684","Glow Plug Control Module to PCM Communication Circuit Range/Performance"}
,{"P0685","ECM/PCM Power Relay Control Circuit Open"}
,{"P0686","ECM/PCM Power Relay Control Circuit Low"}
,{"P0687","ECM/PCM Power Relay Control Circuit High"}
,{"P0688","ECM/PCM Power Relay Sense Circuit Open"}
,{"P0689","ECM/PCM Power Relay Sense Circuit Low"}
,{"P068A/PCM","Power Relay De-Energized Performance - Too Early"}
,{"P068E","8 Glow Plug Control Circuit Low"}
,{"P0690","ECM/PCM Power Relay Sense Circuit High"}
,{"P0691","Fan 1 Control Circuit Low"}
,{"P0692","Fan 1 Control Circuit High"}
,{"P0693","Fan 2 Control Circuit Low"}
,{"P0694","Fan 2 Control Circuit High"}
,{"P0695","Fan 3 Control Circuit Low"}
,{"P0696","Fan 3 Control Circuit High"}
,{"P0697","Sensor Reference Voltage C Circuit Open"}
,{"P0698","Sensor Reference Voltage C Circuit Low"}
,{"P0699","Sensor Reference Voltage C Circuit High"}
,{"P069A","9 Glow Plug Control Circuit Low"}
,{"P069B","9 Glow Plug Control Circuit High"}
,{"P069C","10 Glow Plug Control Circuit Low"}
,{"P069D","10 Glow Plug Control Circuit High"}
,{"P06A1","A/C Compressor Control Circuit Low"}
,{"P06A2","A/C Compressor Control Circuit High"}
,{"P06A3","Reference Voltage D Circuit Open"}
,{"P06A5","Reference Voltage D Circuit High"}
,{"P06A7","Reference Voltage B Circuit Range/Performance"}
,{"P06A8","Reference Voltage C Circuit Range/Performance"}
,{"P06A9","Reference Voltage D Circuit Range/Performance"}
,{"P06AA/ECM/TCM","Internal Temperature B Too High"}
,{"P06AF","Management System - Forced Engine Shutdown"}
,{"P06B0","Power Supply A Circuit/Open"}
,{"P06B2","Power Supply A Circuit High"}
,{"P06B6","Control Module Knock Sensor Processor 1 Performance"}
,{"P06B8","Control Module Non-Volatile Random Access Memory (NVRAM) Error"}
,{"P06B9","1 Glow Plug Circuit Range/Performance"}
,{"P06BA","2 Glow Plug Circuit Range/Performance"}
,{"P06BB","3 Glow Plug Circuit Range/Performance"}
,{"P06BC","4 Glow Plug Circuit Range/Performance"}
,{"P06BD","5 Glow Plug Circuit Range/Performance"}
,{"P06BF","7 Glow Plug Circuit Range/Performance"}
,{"P06C0","8 Glow Plug Circuit Range/Performance"}
,{"P06C1","9 Glow Plug Circuit Range/Performance"}
,{"P06C2","10 Glow Plug Circuit Range/Performance"}
,{"P06C4","12 Glow Plug Circuit Range/Performance"}
,{"P06C5","1 Glow Plug Incorrect"}
,{"P06C6","2 Glow Plug Incorrect"}
,{"P06C7","3 Glow Plug Incorrect"}
,{"P06C8","4 Glow Plug Incorrect"}
,{"P06C9","5 Glow Plug Incorrect"}
,{"P06CA","6 Glow Plug Incorrect"}
,{"P06CB","7 Glow Plug Incorrect"}
,{"P06CC","8 Glow Plug Incorrect"}
,{"P06CD","9 Glow Plug Incorrect"}
,{"P06CE","10 Glow Plug Incorrect"}
,{"P06D0","12 Glow Plug Incorrect"}
,{"P06D1","Control Module Ignition Coil Control Performance"}
,{"P0500","Vehicle Speed Sensor A Malfunction"}
,{"P0501","Vehicle Speed Sensor A Range/Performance"}
,{"P0502","Vehicle Speed Sensor A Low Input"}
,{"P0503","Vehicle Speed Sensor A Intermittent/Erratic/High"}
,{"P0504","Brake Switch A / B Correlation"}
,{"P0505","Idle Control System Malfunction"}
,{"P0506","Idle Control System RPM Lower Than Expected"}
,{"P0507","Idle Control System RPM Higher Than Expected"}
,{"P0508","Idle Air Control System Circuit Low"}
,{"P0509","Idle Air Control System Circuit High"}
,{"P050A","Cold Start Idle Air Control System Performance"}
,{"P050B","Cold Start Ignition Timing Performance"}
,{"P050C","Cold Start Engine Coolant Temperature Performance"}
,{"P050D","Cold Start Rough Idle"}
,{"P050E","Cold Start Engine Exhaust Temperature Too Low"}
,{"P050F","Brake Assist Vacuum Too Low"}
,{"P0510","Closed Throttle Position Switch Malfunction"}
,{"P0511","Idle Air Control Circuit"}
,{"P0512","Starter Request Circuit"}
,{"P0513","Incorrect Immobilizer Key"}
,{"P0514","Battery Temperature Sensor Circuit Range/Performance"}
,{"P0515","Battery Temperature Sensor Circuit"}
,{"P0516","Battery Temperature Sensor Circuit Low"}
,{"P0517","Battery Temperature Sensor Circuit High"}
,{"P0518","Idle Air Control Circuit Intermittent"}
,{"P0519","Idle Air Control System Performance"}
,{"P051A","Crankcase Pressure Sensor Circuit"}
,{"P051B","Crankcase Pressure Sensor Circuit Range/Performance"}
,{"P051C","Crankcase Pressure Sensor Circuit Low"}
,{"P051D","Crankcase Pressure Sensor Circuit High"}
,{"P051E","Crankcase Pressure Sensor Circuit Intermittent/Erratic"}
,{"P051F","Positive Crankcase Ventilation Filter Restriction"}
,{"P0520","Engine Oil Pressure Sensor/Switch Circuit Malfunction"}
,{"P0521","Engine Oil Pressure Sensor/Switch Circuit Range/Performance"}
,{"P0522","Engine Oil Pressure Sensor/Switch Circuit Low Voltage"}
,{"P0523","Engine Oil Pressure Sensor/Switch Circuit High Voltage"}
,{"P0524","Engine Oil Pressure Too Low"}
,{"P0525","Cruise Control Servo Control Circuit Range/Performance"}
,{"P0526","Fan Speed Sensor Circuit"}
,{"P0527","Fan Speed Sensor Circuit Range/Performance"}
,{"P0528","Fan Speed Sensor Circuit No Signal"}
,{"P0529","Fan Speed Sensor Circuit Intermittent"}
,{"P052A","Cold Start A Camshaft Position Timing Over-Advanced Bank 1"}
,{"P052B","Cold Start A Camshaft Position Timing Over-Retarded Bank 1"}
,{"P052C","Cold Start A Camshaft Position Timing Over-Advanced Bank 2"}
,{"P052D","Cold Start A Camshaft Position Timing Over-Retarded Bank 2"}
,{"P052E","Positive Crankcase Ventilation Regulator Valve Performance"}
,{"P052F","ISO/SAE Reserved"}
,{"P0530","A/C Refrigerant Pressure Sensor A Circuit"}
,{"P0531","A/C Refrigerant Pressure Sensor A Circuit Range/Performance"}
,{"P0532","A/C Refrigerant Pressure Sensor A Circuit Low"}
,{"P0533","A/C Refrigerant Pressure Sensor A Circuit High"}
,{"P0534","Air Conditioner Refrigerant Charge Loss"}
,{"P0535","A/C Evaporator Temperature Sensor Circuit"}
,{"P0536","A/C Evaporator Temperature Sensor Circuit Range/Performance"}
,{"P0537","A/C Evaporator Temperature Sensor Circuit Low"}
,{"P0538","A/C Evaporator Temperature Sensor Circuit High"}
,{"P0539","A/C Evaporator Temperature Sensor Circuit Intermittent"}
,{"P053A","Positive Crankcase Ventilation Heater Control Circuit /Open"}
,{"P053B","Positive Crankcase Ventilation Heater Control Circuit Low"}
,{"P053C","Positive Crankcase Ventilation Heater Control Circuit High"}
,{"P053D","P053E, P053F ISO/SAE Reserved"}
,{"P0540","Intake Air Heater A Circuit"}
,{"P0541","Intake Air Heater A Circuit Low"}
,{"P0542","Intake Air Heater A Circuit High"}
,{"P0543","Intake Air Heater A Circuit Open"}
,{"P0544","Exhaust Gas Temperature Sensor Circuit (Bank 1 Sensor 1)"}
,{"P0545","Exhaust Gas Temperature Sensor Circuit Low (Bank 1 Sensor 1)"}
,{"P0546","Exhaust Gas Temperature Sensor Circuit High (Bank 1 Sensor 1)"}
,{"P0547","Exhaust Gas Temperature Sensor Circuit (Bank 2 Sensor 1)"}
,{"P0548","Exhaust Gas Temperature Sensor Circuit Low (Bank 2 Sensor 1)"}
,{"P0549","Exhaust Gas Temperature Sensor Circuit High (Bank 2 Sensor 1)"}
,{"P054A","Cold Start B Camshaft Position Timing Over-Advanced Bank 1"}
,{"P054B","Cold Start B Camshaft Position Timing Over-Retarded Bank 1"}
,{"P054C","Cold Start B Camshaft Position Timing Over-Advanced Bank 2"}
,{"P054D","Cold Start B Camshaft Position Timing Over-Retarded Bank 2"}
,{"P054E","P054F ISO/SAE Reserved"}
,{"P0550","Power Steering Pressure Sensor Circuit Malfunction"}
,{"P0551","Power Steering Pressure Sensor Circuit Range/Performance"}
,{"P0552","Power Steering Pressure Sensor Circuit Low Input"}
,{"P0553","Power Steering Pressure Sensor Circuit High Input"}
,{"P0554","Power Steering Pressure Sensor Circuit Intermittent"}
,{"P0555","Brake Booster Pressure Sensor Circuit"}
,{"P0556","Brake Booster Pressure Sensor Circuit Range/Performance"}
,{"P0557","Brake Booster Pressure Sensor Circuit Low"}
,{"P0558","Brake Booster Pressure Sensor Circuit High"}
,{"P0559","Brake Booster Pressure Sensor Circuit Intermittent"}
,{"P055A","P055B, P055C, P055D, P055E, P055F ISO/SAE Reserved"}
,{"P0560","System Voltage Malfunction"}
,{"P0561","System Voltage Unstable"}
,{"P0562","System Voltage Low"}
,{"P0563","System Voltage High"}
,{"P0564","Cruise Control Multi-Function Input A Circuit"}
,{"P0565","Cruise Control On Signal Malfunction"}
,{"P0566","Cruise Control Off Signal Malfunction"}
,{"P0567","Cruise Control Resume Signal Malfunction"}
,{"P0568","Cruise Control Set Signal Malfunction"}
,{"P0569","Cruise Control Coast Signal Malfunction"}
,{"P056A","Cruise Control Increase Distance Signal"}
,{"P056B","Cruise Control Decrease Distance Signal"}
,{"P056C","P056D, P056E, P056F ISO/SAE Reserved"}
,{"P0570","Cruise Control Accel Signal Malfunction"}
,{"P0571","Cruise Control/Brake Switch A Circuit Malfunction"}
,{"P0572","Cruise Control/Brake Switch A Circuit Low"}
,{"P0573","Cruise Control/Brake Switch A Circuit High"}
,{"P0574","Cruise Control System - Vehicle Speed Too High"}
,{"P0575","Cruise Control Input Circuit"}
,{"P0576","Cruise Control Input Circuit Low"}
,{"P0577","Cruise Control Input Circuit High"}
,{"P0578","Cruise Control Multi-Function Input A Circuit Stuck"}
,{"P0579","Cruise Control Multi-Function Input A Circuit Range/Performance"}
,{"P057A","P057B, P057C, P057D, P057E, P057F ISO/SAE Reserved"}
,{"P0580","Cruise Control Multi-Function Input A Circuit Low"}
,{"P0581","Cruise Control Multi-Function Input A Circuit High"}
,{"P0582","Cruise Control Vacuum Control Circuit /Open"}
,{"P0583","Cruise Control Vacuum Control Circuit Low"}
,{"P0584","Cruise Control Vacuum Control Circuit High"}
,{"P0585","Cruise Control Multi-Function Input A / B Correlation"}
,{"P0586","Cruise Control Vent Control Circuit/Open"}
,{"P0587","Cruise Control Vent Control Circuit Low"}
,{"P0588","Cruise Control Vent Control Circuit High"}
,{"P0589","Cruise Control Multi-Function Input B Circuit"}
,{"P058A","P058B, P058C, P058D, P058E, P058F ISO/SAE Reserved"}
,{"P0590","Cruise Control Multi-Function Input B Circuit Stuck"}
,{"P0591","Cruise Control Multi-Function Input B Circuit Range/Performance"}
,{"P0592","Cruise Control Multi-Function Input B Circuit Low"}
,{"P0593","Cruise Control Multi-Function Input B Circuit High"}
,{"P0594","Cruise Control Servo Control Circuit/Open"}
,{"P0595","Cruise Control Servo Control Circuit Low"}
,{"P0596","Cruise Control Servo Control Circuit High"}
,{"P0597","Thermostat Heater Control Circuit/Open"}
,{"P0598","Thermostat Heater Control Circuit Low"}
,{"P0599","Thermostat Heater Control Circuit High"}
,{"P059A","- P05FF ISO/SAE Reserved"}
,{"P0400","Exhaust Gas Recirculation Flow Malfunction"}
,{"P0401","Exhaust Gas Recirculation Flow Insufficient Detected"}
,{"P0402","Exhaust Gas Recirculation Flow Excessive Detected"}
,{"P0403","Exhaust Gas Recirculation Circuit Malfunction"}
,{"P0404","Exhaust Gas Recirculation Circuit Range/Performance"}
,{"P0405","Exhaust Gas Recirculation Sensor A Circuit Low"}
,{"P0406","Exhaust Gas Recirculation Sensor A Circuit High"}
,{"P0407","Exhaust Gas Recirculation Sensor B Circuit Low"}
,{"P0408","Exhaust Gas Recirculation Sensor B Circuit High"}
,{"P0409","Exhaust Gas Recirculation Sensor A Circuit"}
,{"P040A","Gas Recirculation Temperature Sensor A Circuit"}
,{"P040B","Gas Recirculation Temperature Sensor A Circuit Range/Performance"}
,{"P040D","Gas Recirculation Temperature Sensor A Circuit High"}
,{"P040F","Gas Recirculation Temperature Sensor A / B Correlation"}
,{"P0410","Secondary Air Injection System Malfunction"}
,{"P0411","Secondary Air Injection System Incorrect Flow Detected"}
,{"P0412","Secondary Air Injection System Switching Valve A Circuit Malfunction"}
,{"P0413","Secondary Air Injection System Switching Valve A Circuit Open"}
,{"P0414","Secondary Air Injection System Switching Valve A Circuit Shorted"}
,{"P0415","Secondary Air Injection System Switching Valve B Circuit Malfunction"}
,{"P0416","Secondary Air Injection System Switching Valve B Circuit Open"}
,{"P0417","Secondary Air Injection System Switching Valve B Circuit Shorted"}
,{"P0418","Secondary Air Injection System Relay A Circuit Malfunction"}
,{"P0419","Secondary Air Injection System Relay B Circuit Malfunction"}
,{"P041A","Gas Recirculation Temperature Sensor B Circuit"}
,{"P041B","Gas Recirculation Temperature Sensor B Circuit Range/Performance"}
,{"P041C","Gas Recirculation Temperature Sensor B Circuit Low"}
,{"P041D","Gas Recirculation Temperature Sensor B Circuit High"}
,{"P041E","Gas Recirculation Temperature Sensor B Circuit Intermittent/Erratic"}
,{"P0420","Catalyst System Efficiency Below Threshold (Bank 1)"}
,{"P0421","Warm Up Catalyst Efficiency Below Threshold (Bank 1)"}
,{"P0422","Main Catalyst Efficiency Below Threshold (Bank 1)"}
,{"P0423","Heated Catalyst Efficiency Below Threshold (Bank 1)"}
,{"P0424","Heated Catalyst Temperature Below Threshold (Bank 1)"}
,{"P0425","Catalyst Temperature Sensor (Bank 1, Sensor 1)"}
,{"P0426","Catalyst Temperature Sensor Range/Performance (Bank 1, Sensor 1)"}
,{"P0427","Catalyst Temperature Sensor Low (Bank 1, Sensor 1)"}
,{"P0428","Catalyst Temperature Sensor High (Bank 1, Sensor 1)"}
,{"P0429","Catalyst Heater Control Circuit (Bank 1)"}
,{"P042A","Temperature Sensor Circuit (Bank 1 Sensor 2)"}
,{"P042B","Temperature Sensor Circuit Range/Performance (Bank 1 Sensor 2)"}
,{"P042C","Temperature Sensor Circuit Low (Bank 1 Sensor 2)"}
,{"P042D","Temperature Sensor Circuit High (Bank 1 Sensor 2)"}
,{"P042E","Gas Recirculation A Control Stuck Open"}
,{"P0430","Catalyst System Efficiency Below Threshold (Bank 2)"}
,{"P0431","Warm Up Catalyst Efficiency Below Threshold (Bank 2)"}
,{"P0432","Main Catalyst Efficiency Below Threshold (Bank 2)"}
,{"P0433","Heated Catalyst Efficiency Below Threshold (Bank 2)"}
,{"P0434","Heated Catalyst Temperature Below Threshold (Bank 2)"}
,{"P0435","Catalyst Temperature Sensor Circuit Malfunction (Bank 2, Sensor 1)"}
,{"P0436","Catalyst Temperature Sensor Circuit Range/Performance (Bank 2, Sensor 1)"}
,{"P0437","Catalyst Temperature Sensor Circuit Low (Bank 2, Sensor 1)"}
,{"P0438","Catalyst Temperature Sensor Circuit High (Bank 2, Sensor 1)"}
,{"P0439","Catalyst Heater Control Circuit (Bank 2)"}
,{"P043A","Temperature Sensor Circuit (Bank 2 Sensor 2)"}
,{"P043B","Temperature Sensor Circuit Range/Performance Bank 2 Sensor 2)"}
,{"P043C","Temperature Sensor Circuit Low (Bank 2 Sensor 2)"}
,{"P043E","Emission System Leak Detection Reference Orifice Low Flow"}
,{"P0440","Evaporative Emission Control System Malfunction"}
,{"P0441","Evaporative Emission Control System Incorrect Purge Flow"}
,{"P0442","Evaporative Emission Control System Leak Detected (small leak)"}
,{"P0443","Evaporative Emission Control System Purge Control Valve Circuit"}
,{"P0444","Evaporative Emission Control System Purge Control Valve Circuit Open"}
,{"P0445","Evaporative Emission Control System Purge Control Valve Circuit Shorted"}
,{"P0446","Evaporative Emission Control System Vent Control Circuit Malfunction"}
,{"P0447","Evaporative Emission Control System Vent Control Circuit Open"}
,{"P0448","Evaporative Emission Control System Vent Control Circuit Shorted"}
,{"P0449","Evaporative Emission Control System Vent Valve/Solenoid Circuit Malfunction"}
,{"P044A","Gas Recirculation Sensor C Circuit"}
,{"P044C","Gas Recirculation Sensor C Circuit Low"}
,{"P044E","Gas Recirculation Sensor C Circuit Intermittent/Erratic"}
,{"P044F","Air Injection System Switching Valve A Circuit High"}
,{"P0450","Evaporative Emission Control System Pressure Sensor Malfunction"}
,{"P0451","Evaporative Emission Control System Pressure Sensor Range/Performance"}
,{"P0452","Evaporative Emission Control System Pressure Sensor Low Input"}
,{"P0453","Evaporative Emission Control System Pressure Sensor High Input"}
,{"P0454","Evaporative Emission Control System Pressure Sensor Intermittent"}
,{"P0455","Evaporative Emission Control System Leak Detected (gross leak)"}
,{"P0456","Evaporative Emissions System Small Leak Detected"}
,{"P0457","Evaporative Emission Control System Leak Detected"}
,{"P0458","Evaporative Emission System Purge Control Valve Circuit Low"}
,{"P0459","Evaporative Emission System Purge Control Valve Circuit High"}
,{"P045A","Gas Recirculation B Control Circuit"}
,{"P045B","Gas Recirculation B Control Circuit Range/Performance"}
,{"P045C","Gas Recirculation B Control Circuit Low"}
,{"P045D","Gas Recirculation B Control Circuit High"}
,{"P045F","Gas Recirculation B Control Stuck Closed"}
,{"P0460","Fuel Level Sensor Circuit Malfunction"}
,{"P0461","Fuel Level Sensor Circuit Range/Performance"}
,{"P0462","Fuel Level Sensor Circuit Low Input"}
,{"P0463","Fuel Level Sensor Circuit High Input"}
,{"P0464","Fuel Level Sensor Circuit Intermittent"}
,{"P0465","Purge Flow Sensor Circuit Malfunction"}
,{"P0466","Purge Flow Sensor Circuit Range/Performance"}
,{"P0467","Purge Flow Sensor Circuit Low Input"}
,{"P0468","Purge Flow Sensor Circuit High Input"}
,{"P0469","Purge Flow Sensor Circuit Intermittent"}
,{"P046A","Temperature Sensor 1/2 Correlation (Bank 1)"}
,{"P046B","Temperature Sensor 1/2 Correlation (Bank 2)"}
,{"P046D","Gas Recirculation Sensor A Circuit Intermittent/Erratic"}
,{"P046E","Gas Recirculation Sensor B Circuit Range/Performance"}
,{"P046F","Gas Recirculation Sensor B Circuit Intermittent/Erratic"}
,{"P0470","Exhaust Pressure Sensor A Circuit"}
,{"P0471","Exhaust Pressure Sensor A Circuit Range/Performance"}
,{"P0472","Exhaust Pressure Sensor A Circuit Low"}
,{"P0473","Exhaust Pressure Sensor A Circuit High"}
,{"P0474","Exhaust Pressure Sensor A Circuit Intermittent"}
,{"P0475","Exhaust Pressure Control Valve A"}
,{"P0476","Exhaust Pressure Control Valve A Range/Performance"}
,{"P0477","Exhaust Pressure Control Valve A Low"}
,{"P0478","Exhaust Pressure Control Valve A High"}
,{"P0479","Exhaust Pressure Control Valve A Intermittent"}
,{"P047A","Pressure Sensor B Circuit"}
,{"P047B","Pressure Sensor B Circuit Range/Performance"}
,{"P047C","Pressure Sensor B Circuit Low"}
,{"P047D","Pressure Sensor B Circuit High"}
,{"P047E","Pressure Sensor B Circuit Intermittent/Erratic"}
,{"P0480","Cooling Fan I Control Circuit Malfunction"}
,{"P0481","Cooling Fan 2 Control Circuit Malfunction"}
,{"P0482","Cooling Fan 3 Control Circuit Malfunction"}
,{"P0483","Cooling Fan Rationality Check Malfunction"}
,{"P0484","Cooling Fan Circuit Over Current"}
,{"P0485","Cooling Fan Power/Ground Circuit Malfunction"}
,{"P0486","Exhaust Gas Recirculation Sensor B Circuit"}
,{"P0487","Exhaust Gas Recirculation Throttle Control Circuit A Open"}
,{"P0488","Exhaust Gas Recirculation Throttle Control Circuit A Range/Performance"}
,{"P0489","Exhaust Gas Recirculation A Control Circuit Low"}
,{"P048A","Pressure Control Valve A Stuck Closed"}
,{"P048B","Pressure Control Valve Position Sensor/Switch Circuit"}
,{"P048C","Exhaust Pressure Control Valve Position Sensor/Switch Circuit Range/Performance"}
,{"P048D","Exhaust Pressure Control Valve Position Sensor/Switch Circuit Low"}
,{"P048E","Pressure Control Valve Position Sensor/Switch Circuit High"}
,{"P048F","Exhaust Pressure Control Valve Position Sensor/Switch Circuit Intermittent/Erratic"}
,{"P0490","Exhaust Gas Recirculation A Control Circuit High"}
,{"P0491","Secondary Air Injection System Insufficient Flow Bank 1"}
,{"P0492","Secondary Air Injection System Insufficient Flow Bank 2"}
,{"P0493","Fan Overspeed"}
,{"P0494","Fan Speed Low"}
,{"P0495","Fan Speed High"}
,{"P0496","EVAP Flow During A Non-Purge Condition"}
,{"P0497","Evaporative Emission System Low Purge Flow"}
,{"P0498","Evaporative Emission System Vent Valve Control Circuit Low"}
,{"P0499","Evaporative Emission System Vent Valve Control Circuit High"}
,{"P049A","Gas Recirculation B Flow"}
,{"P049B","Gas Recirculation B Flow Insufficient Detected"}
,{"P049C","Gas Recirculation B Flow Excessive Detected"}
,{"P049D","Gas Recirculation A Control Position Exceeded Learning Limit"}
,{"P049E","Gas Recirculation B Control Position Exceeded Learning Limit"}
,{"P049F","Pressure Control Valve B"}
,{"P04A0","Pressure Control Valve B Range/Performance"}
,{"P04A1","Pressure Control Valve B Low"}
,{"P04A2","Pressure Control Valve B High"}
,{"P04A3","Pressure Control Valve B Intermittent"}
,{"P04A4","Pressure Control Valve B Stuck Open"}
,{"P04A5","Pressure Control Valve B Stuck Closed"}
,{"P04A6","Pressure Control Valve B Position Sensor/Switch Circuit"}
,{"P04A7","Pressure Control Valve B Position Sensor/Switch Circuit Range/Performance"}
,{"P04A8","Pressure Control Valve B Position Sensor/Switch Circuit Low"}
,{"P04A9","Exhaust Pressure Control Valve B Position Sensor/Switch Circuit High"}
,{"P04AA","Exhaust Pressure Control Valve B Position Sensor/Switch Circuit Intermittent/Erratic"}
,{"P04AB","- P04FF ISO/SAE Reserved"}
,{"P0300","Random/Multiple Cylinder Misfire Detected"}
,{"P0301","Cylinder 1 Misfire Detected"}
,{"P0302","Cylinder 2 Misfire Detected"}
,{"P0303","Cylinder 3 Misfire Detected"}
,{"P0304","Cylinder 4 Misfire Detected"}
,{"P0305","Cylinder 5 Misfire Detected"}
,{"P0306","Cylinder 6 Misfire Detected"}
,{"P0307","Cylinder 7 Misfire Detected"}
,{"P0308","Cylinder 8 Misfire Detected"}
,{"P0309","Cylinder 9 Misfire Detected"}
,{"P0310","Cylinder 10 Misfire Detected"}
,{"P0311","Cylinder 11 Misfire Detected"}
,{"P0312","Cylinder 12 Misfire Detected"}
,{"P0313","Misfire Detected with Low Fuel"}
,{"P0314","Single Cylinder Misfire (Cylinder not Specified)"}
,{"P0315","Crankshaft Position System Variation Not Learned"}
,{"P0316","Misfire Detected On Startup (First 1000 Revolutions)"}
,{"P0317","Rough Road Hardware Not Present"}
,{"P0318","Rough Road Sensor A Signal Circuit"}
,{"P0319","Rough Road Sensor B Signal Circuit"}
,{"P031A","P031C, P031D, P031E, P031F ISO/SAE Reserved"}
,{"P0320","Ignition/Distributor Engine Speed Input Circuit Malfunction"}
,{"P0321","Ignition/Distributor Engine Speed Input Circuit Range/Performance"}
,{"P0322","Ignition/Distributor Engine Speed Input Circuit No Signal"}
,{"P0323","Ignition/Distributor Engine Speed Input Circuit Intermittent"}
,{"P0324","Knock Control System Error"}
,{"P0325","Knock Sensor 1 Circuit Malfunction (Bank 1 or Single Sensor)"}
,{"P0326","Knock Sensor 1 Circuit Range/Performance (Bank 1 or Single Sensor)"}
,{"P0327","Knock Sensor 1 Circuit Low Input (Bank 1 or Single Sensor)"}
,{"P0328","Knock Sensor 1 Circuit High Input (Bank 1 or Single Sensor)"}
,{"P0329","Knock Sensor 1 Circuit Intermittent (Bank 1 or Single Sensor)"}
,{"P032A","Sensor 3 Circuit Bank 1"}
,{"P032B","Sensor 3 Circuit Range/Performance Bank 1"}
,{"P032C","Sensor 3 Circuit Low Bank 1"}
,{"P032E","Sensor 3 Circuit Intermittent Bank 1"}
,{"P0330","Knock Sensor 2 Circuit Malfunction (Bank 2)"}
,{"P0331","Knock Sensor 2 Circuit Range/Performance (Bank 2)"}
,{"P0332","Knock Sensor 2 Circuit Low Input (Bank 2)"}
,{"P0333","Knock Sensor 2 Circuit High Input (Bank 2)"}
,{"P0334","Knock Sensor 2 Circuit Intermittent (Bank 2)"}
,{"P0335","Crankshaft Position Sensor A Circuit Malfunction"}
,{"P0336","Crankshaft Position Sensor A Circuit Range/Performance"}
,{"P0337","Crankshaft Position Sensor A Circuit Low Input"}
,{"P0338","Crankshaft Position Sensor A Circuit High Input"}
,{"P0339","Crankshaft Position Sensor A Circuit Intermittent"}
,{"P033A","Sensor 4 Circuit (Bank 2)"}
,{"P033B","Sensor 4 Circuit Range/Performance (Bank 2)"}
,{"P033C","Sensor 4 Circuit Low (Bank 2)"}
,{"P033D","Sensor 4 Circuit High (Bank 2)"}
,{"P033E","Sensor 4 Circuit Intermittent (Bank 2)"}
,{"P033F","Reserved"}
,{"P0340","Camshaft Position Sensor Circuit Malfunction (Bank 1)"}
,{"P0341","Camshaft Position Sensor Circuit Range/Performance (Bank 1)"}
,{"P0342","Camshaft Position Sensor A Circuit Low Input (Bank 1)"}
,{"P0343","Camshaft Position Sensor A Circuit High Input (Bank 1)"}
,{"P0344","Camshaft Position Sensor A Circuit Intermittent (Bank 1)"}
,{"P0345","Camshaft Position Sensor A Circuit Malfunction (Bank 2)"}
,{"P0346","Camshaft Position Sensor A Circuit Range/Performance (Bank 2)"}
,{"P0347","Camshaft Position Sensor A Circuit Low Input (Bank 2)"}
,{"P0348","Camshaft Position Sensor A Circuit High Input (Bank 2)"}
,{"P0349","Camshaft Position Sensor A Circuit Intermittent (Bank 2)"}
,{"P034A","P034B,P034C, P034D, P034E, P034F ISO/SAE Reserved"}
,{"P0350","Ignition Coil Primary/Secondary Circuit Malfunction"}
,{"P0351","Ignition Coil A Primary/Secondary Circuit Malfunction"}
,{"P0352","Ignition Coil B Primary/Secondary Circuit Malfunction"}
,{"P0353","Ignition Coil C Primary/Secondary Circuit Malfunction"}
,{"P0354","Ignition Coil D Primary/Secondary Circuit Malfunction"}
,{"P0355","Ignition Coil E Primary/Secondary Circuit Malfunction"}
,{"P0356","Ignition Coil F Primary/Secondary Circuit Malfunction"}
,{"P0357","Ignition Coil G Primary/Secondary Circuit Malfunction"}
,{"P0358","Ignition Coil H Primary/Secondary Circuit Malfunction"}
,{"P0359","Ignition Coil I Primary/Secondary Circuit Malfunction"}
,{"P035A","P035B,P035C, P035D, P035D, P035E, P035F ISO/SAE Reserved"}
,{"P0360","Ignition Coil J Primary/Secondary Circuit Malfunction"}
,{"P0361","Ignition Coil K Primary/Secondary Circuit Malfunction"}
,{"P0362","Ignition Coil L Primary/Secondary Circuit Malfunction"}
,{"P0363","Misfire Detected - Fueling Disabled"}
,{"P0364","Reserved"}
,{"P0365","Camshaft Position Sensor B Circuit (Bank 1)"}
,{"P0366","Camshaft Position Sensor B Circuit Range/Performance (Bank 1)"}
,{"P0367","Camshaft Position Sensor B Circuit Low (Bank 1)"}
,{"P0368","Camshaft Position Sensor B Circuit High (Bank 1)"}
,{"P0369","Camshaft Position Sensor B Circuit Intermittent (Bank 1)"}
,{"P036A","P036B, P036C, P036D, P036E, P036F ISO/SAE Reserved"}
,{"P0370","Timing Reference High Resolution Signal A Malfunction"}
,{"P0371","Timing Reference High Resolution Signal A Too Many Pulses"}
,{"P0372","Timing Reference High Resolution Signal A Too Few Pulses"}
,{"P0373","Timing Reference High Resolution Signal A Intermittent/Erratic Pulses"}
,{"P0374","Timing Reference High Resolution Signal A No Pulses"}
,{"P0375","Timing Reference High Resolution Signal B Malfunction"}
,{"P0376","Timing Reference High Resolution Signal B Too Many Pulses"}
,{"P0377","Timing Reference High Resolution Signal B Too Few Pulses"}
,{"P0378","Timing Reference High Resolution Signal B Intermittent/Erratic Pulses"}
,{"P0379","Timing Reference High Resolution Signal B No Pulses"}
,{"P037A","P037A ISO/SAE Reserved"}
,{"P037C","P037B ISO/SAE Reserved"}
,{"P037C","P037C ISO/SAE Reserved"}
,{"P037E","Plug Sense Circuit Low"}
,{"P037F","Plug Sense Circuit High"}
,{"P0380","Glow Plug/Heater Circuit A"}
,{"P0381","Glow Plug/Heater Indicator Circuit Malfunction"}
,{"P0382","Glow Plug/Heater Circuit B"}
,{"P0383","Glow Plug Control Module Control Circuit Low"}
,{"P0384","Glow Plug Control Module Control Circuit High"}
,{"P0385","Crankshaft Position Sensor B Circuit Malfunction"}
,{"P0386","Crankshaft Position Sensor B Circuit Range/Performance"}
,{"P0387","Crankshaft Position Sensor B Circuit Low Input"}
,{"P0388","Crankshaft Position Sensor B Circuit High Input"}
,{"P0389","Crankshaft Position Sensor B Circuit Intermittent"}
,{"P038A","P038B, P038C, P038D, P038E, P038F ISO/SAE Reserved"}
,{"P0390","Camshaft Position Sensor B Circuit (Bank 2)"}
,{"P0391","Camshaft Position Sensor B Circuit Range/Performance (Bank 2)"}
,{"P0392","Camshaft Position Sensor B Circuit Low (Bank 2)"}
,{"P0393","Camshaft Position Sensor B Circuit High (Bank 2)"}
,{"P0394","Camshaft Position Sensor B Circuit Intermittent (Bank 2)"}
,{"P0395","P03FF ISO/SAE Reserved"}
,{"P0200","Injector Circuit Malfunction"}
,{"P0201","Injector Circuit Malfunction - Cylinder 1"}
,{"P0202","Injector Circuit Malfunction - Cylinder 2"}
,{"P0203","Injector Circuit Malfunction - Cylinder 3"}
,{"P0204","Injector Circuit Malfunction - Cylinder 4"}
,{"P0205","Injector Circuit Malfunction - Cylinder 5"}
,{"P0206","Injector Circuit Malfunction - Cylinder 6"}
,{"P0207","Injector Circuit Malfunction - Cylinder 7"}
,{"P0208","Injector Circuit Malfunction - Cylinder 8"}
,{"P0209","Injector Circuit Malfunction - Cylinder 9"}
,{"P020A","Cylinder 1 Injection Timing"}
,{"P020B","Cylinder 2 Injection Timing"}
,{"P020C","Cylinder 3 Injection Timing"}
,{"P020D","Cylinder 4 Injection Timing"}
,{"P020E","Cylinder 5 Injection Timing"}
,{"P020F","Cylinder 6 Injection Timing"}
,{"P0210","Injector Circuit Malfunction - Cylinder 10"}
,{"P0211","Injector Circuit Malfunction - Cylinder 11"}
,{"P0212","Injector Circuit Malfunction - Cylinder 12"}
,{"P0213","Cold Start Injector 1 Malfunction"}
,{"P0214","Cold Start Injector 2 Malfunction"}
,{"P0215","Engine Shutoff Solenoid Malfunction"}
,{"P0216","Injection Timing Control Circuit Malfunction"}
,{"P0217","Engine Overtemp Condition"}
,{"P0218","Transmission Over Temperature Condition"}
,{"P0219","Engine Overspeed Condition"}
,{"P021A","Cylinder 7 Injection Timing"}
,{"P021B","Cylinder 8 Injection Timing"}
,{"P021C","Cylinder 9 Injection Timing"}
,{"P021D","Cylinder 10 Injection Timing"}
,{"P021E","Cylinder 11 Injection Timing"}
,{"P021F","Cylinder 12 Injection Timing"}
,{"P0220","Throttle/Pedal Position Sensor/Switch B Circuit Malfunction"}
,{"P0221","Throttle/Pedal Position Sensor/Switch B Circuit Range/Performance"}
,{"P0222","Throttle/Pedal Position Sensor/Switch B Circuit Low Input"}
,{"P0223","Throttle/Pedal Position Sensor/Switch B Circuit High Input"}
,{"P0224","Throttle/Pedal Position Sensor/Switch B Circuit Intermittent"}
,{"P0225","Throttle/Pedal Position Sensor/Switch C Circuit Malfunction"}
,{"P0226","Throttle/Pedal Position Sensor/Switch C Circuit Range/Performance"}
,{"P0227","Throttle/Pedal Position Sensor/Switch C Circuit Low Input"}
,{"P0228","Throttle/Pedal Position Sensor/Switch C Circuit High Input"}
,{"P0229","Throttle/Pedal Position Sensor/Switch C Circuit Intermittent"}
,{"P022A","Charge Air Cooler Bypass Control A Circuit Open"}
,{"P022B","Charge Air Cooler Bypass Control A Circuit Low"}
,{"P022C","Charge Air Cooler Bypass Control A Circuit High"}
,{"P022D","Charge Air Cooler Bypass Control B Circuit Open"}
,{"P022E","Charge Air Cooler Bypass Control B Circuit Low"}
,{"P022F","Charge Air Cooler Bypass Control B Circuit High"}
,{"P0230","Fuel Pump Primary Circuit Malfunction"}
,{"P0231","Fuel Pump Secondary Circuit Low"}
,{"P0232","Fuel Pump Secondary Circuit High"}
,{"P0233","Fuel Pump Secondary Circuit Intermittent"}
,{"P0234","Engine Turbocharger/Supercharger Overboost Condition"}
,{"P0235","Turbocharger Boost Sensor A Circuit Malfunction"}
,{"P0236","Turbocharger Boost Sensor A Circuit Range/Performance"}
,{"P0237","Turbocharger Boost Sensor A Circuit Low"}
,{"P0238","Turbocharger Boost Sensor A Circuit High"}
,{"P0239","Turbocharger Boost Sensor B Circuit Malfunction"}
,{"P023A","Charge Air Cooler Coolant Pump Control Circuit Open"}
,{"P023B","Charge Air Cooler Coolant Pump Control Circuit Low"}
,{"P023C","Charge Air Cooler Coolant Pump Control Circuit High"}
,{"P023D","Manifold Absolute Pressure - Turbocharger/Supercharger Boost Sensor A Correlation"}
,{"P023E","Manifold Absolute Pressure - Turbocharger/Supercharger Boost Sensor B Correlation"}
,{"P023F","Fuel Pump Secondary Circuit/Open"}
,{"P0240","Turbocharger Boost Sensor B Circuit Range/Performance"}
,{"P0241","Turbocharger Boost Sensor B Circuit Low"}
,{"P0242","Turbocharger Boost Sensor B Circuit High"}
,{"P0243","Turbocharger Wastegate Solenoid A Malfunction"}
,{"P0244","Turbocharger Wastegate Solenoid A Range/Performance"}
,{"P0245","Turbocharger Wastegate Solenoid A Low"}
,{"P0246","Turbocharger Wastegate Solenoid A High"}
,{"P0247","Turbocharger Wastegate Solenoid B Malfunction"}
,{"P0248","Turbocharger Wastegate Solenoid B Range/Performance"}
,{"P0249","Turbocharger Wastegate Solenoid B Low"}
,{"P024A","Charge Air Cooler Bypass Control A Range/Performance"}
,{"P024B","Charge Air Cooler Bypass Control A Stuck"}
,{"P024C","Charge Air Cooler Bypass Position Sensor A Circuit"}
,{"P024D","Charge Air Cooler Bypass Position Sensor A Circuit Range/Performance"}
,{"P024E","Charge Air Cooler Bypass Position Sensor A Circuit Low"}
,{"P024F","Charge Air Cooler Bypass Position Sensor A Circuit High"}
,{"P0250","Turbocharger Wastegate Solenoid B High"}
,{"P0251","Injection Pump Fuel Metering Control A Malfunction (Cam/Rotor/Injector)"}
,{"P0252","Injection Pump Fuel Metering Control A Range/Performance (Cam/Rotor/Injector)"}
,{"P0253","Injection Pump Fuel Metering Control A Low (Cam/Rotor/Injector)"}
,{"P0254","Injection Pump Fuel Metering Control A High (Cam/Rotor/Injector)"}
,{"P0255","Injection Pump Fuel Metering Control A Intermittent (Cam/Rotor/Injector)"}
,{"P0256","Injection Pump Fuel Metering Control B Malfunction (Cam/Rotor/Injector)"}
,{"P0257","Injection Pump Fuel Metering Control B Range/Performance Injector)"}
,{"P0258","Injection Pump Fuel Metering Control B Low (Cam/Rotor/Injector)"}
,{"P0259","Injection Pump Fuel Metering Control B High (Cam/Rotor/Injector)"}
,{"P025A","Fuel Pump Module Control Circuit/Open"}
,{"P025B","Fuel Pump Module Control Circuit Range/Performance"}
,{"P025C","Fuel Pump Module Control Circuit Low"}
,{"P025D","Fuel Pump Module Control Circuit High"}
,{"P025E","& P025F ISO/SAE Reserved"}
,{"P0260","Injection Pump Fuel Metering Control B Intermittent (Cam/Rotor/Injector)"}
,{"P0261","Cylinder 1 Injector Circuit Low"}
,{"P0262","Cylinder 1 Injector Circuit High"}
,{"P0263","Cylinder 1 Contribution/Balance Fault"}
,{"P0264","Cylinder 2 Injector Circuit Low"}
,{"P0265","Cylinder 2 Injector Circuit High"}
,{"P0266","Cylinder 2 Contribution/Balance Fault"}
,{"P0267","Cylinder 3 Injector Circuit Low"}
,{"P0268","Cylinder 3 Injector Circuit High"}
,{"P0269","Cylinder 3 Contribution/Balance Fault"}
,{"P026A","P026B, P026C, P026D, P026E, P026F ISO/SAE Reserved"}
,{"P0270","Cylinder 4 Injector Circuit Low"}
,{"P0271","Cylinder 4 Injector Circuit High"}
,{"P0272","Cylinder 4 Contribution/Balance Fault"}
,{"P0273","Cylinder 5 Injector Circuit Low"}
,{"P0274","Cylinder 5 Injector Circuit High"}
,{"P0275","Cylinder 5 Contribution/Balance Fault"}
,{"P0276","Cylinder 6 Injector Circuit Low"}
,{"P0277","Cylinder 6 Injector Circuit High"}
,{"P0278","Cylinder 6 Contribution/Balance Fault"}
,{"P0279","Cylinder 7 Injector Circuit Low"}
,{"P027A","P027B, P027C, P027D, P027E, P027F ISO/SAE Reserved"}
,{"P0280","Cylinder 7 Injector Circuit High"}
,{"P0281","Cylinder 7 Contribution/Balance Fault"}
,{"P0282","Cylinder 8 Injector Circuit Low"}
,{"P0283","Cylinder 8 Injector Circuit High"}
,{"P0284","Cylinder 8 Contribution/Balance Fault"}
,{"P0285","Cylinder 9 Injector Circuit Low"}
,{"P0286","Cylinder 9 Injector Circuit High"}
,{"P0287","Cylinder 9 Contribution/Balance Fault"}
,{"P0288","Cylinder 10 Injector Circuit Low"}
,{"P0289","Cylinder 10 Injector Circuit High"}
,{"P028A","P028B, P028C, P028D, P028E, P028F ISO/SAE Reserved"}
,{"P0290","Cylinder 10 Contribution/Balance Fault"}
,{"P0291","Cylinder 11 Injector Circuit Low"}
,{"P0292","Cylinder 11 Injector Circuit High"}
,{"P0293","Cylinder 11 Contribution/Balance Fault"}
,{"P0294","Cylinder 12 Injector Circuit Low"}
,{"P0295","Cylinder 12 Injector Circuit High"}
,{"P0296","Cylinder 12 Contribution/Range Fault"}
,{"P0297","Vehicle Overspeed Condition"}
,{"P0298","Engine Oil Over Temperature Condition"}
,{"P0299","Turbocharger/Supercharger A Underboost Condition"}
,{"P029A","Cylinder 1 - Fuel Trim at Max Limit"}
,{"P029B","Cylinder 1 - Fuel Trim at Min Limit"}
,{"P029C","Cylinder 1 - Injector Restricted"}
,{"P029D","Cylinder 1 - Injector Leaking"}
,{"P029E","Cylinder 2 - Fuel Trim at Max Limit"}
,{"P029F","Cylinder 2 - Fuel Trim at Min Limit"}
,{"P02A0","Cylinder 2 - Injector Restricted"}
,{"P02A1","Cylinder 2 - Injector Leaking"}
,{"P02A2","Cylinder 3 - Fuel Trim at Max Limit"}
,{"P02A3","Cylinder 3 - Fuel Trim at Min Limit"}
,{"P02A4","Cylinder 3 - Injector Restricted"}
,{"P02A5","Cylinder 3 - Injector Leaking"}
,{"P02A6","Cylinder 4 - Fuel Trim at Max Limit"}
,{"P02A7","Cylinder 4 - Fuel Trim at Min Limit"}
,{"P02A8","Cylinder 4 - Injector Restricted"}
,{"P02A9","Cylinder 4 - Injector Leaking"}
,{"P02AA","Cylinder 5 - Fuel Trim at Max Limit"}
,{"P02AB","Cylinder 5 - Fuel Trim at Min Limit"}
,{"P02AC","Cylinder 5 - Injector Restricted"}
,{"P02AD","Cylinder 5 - Injector Leaking"}
,{"P02AE","Cylinder 6 - Fuel Trim at Max Limit"}
,{"P02AF","Cylinder 6 - Fuel Trim at Min Limit"}
,{"P02B0","Cylinder 6 - Injector Restricted"}
,{"P02B1","Cylinder 6 - Injector Leaking"}
,{"P02B2","Cylinder 7 - Fuel Trim at Max Limit"}
,{"P02B3","Cylinder 7 - Fuel Trim at Min Limit"}
,{"P02B4","Cylinder 7 - Injector Restricted"}
,{"P02B5","Cylinder 7 - Injector Leaking"}
,{"P02B6","Cylinder 8 - Fuel Trim at Max Limit"}
,{"P02B7","Cylinder 8 - Fuel Trim at Min Limit"}
,{"P02B8","Cylinder 8 - Injector Restricted"}
,{"P02B9","Cylinder 8 - Injector Leaking"}
,{"P02BA","Cylinder 9 - Fuel Trim at Max Limit"}
,{"P02BB","Cylinder 9 - Fuel Trim at Min Limit"}
,{"P02BC","Cylinder 9 - Injector Restricted"}
,{"P02BD","Cylinder 9 - Injector Leaking"}
,{"P02BE","Cylinder 10 - Fuel Trim at Max Limit"}
,{"P02BF","Cylinder 10 - Fuel Trim at Min Limit"}
,{"P02C0","Cylinder 10 - Injector Restricted"}
,{"P02C1","Cylinder 10 - Injector Leaking"}
,{"P02C2","Cylinder 11 - Fuel Trim at Max Limit"}
,{"P02C3","Cylinder 11 - Fuel Trim at Min Limit"}
,{"P02C4","Cylinder 11 - Injector Restricted"}
,{"P02C5","Cylinder 11 - Injector Leaking"}
,{"P02C6","Cylinder 12 - Fuel Trim at Max Limit"}
,{"P02C7","Cylinder 12 - Fuel Trim at Min Limit"}
,{"P02C8","Cylinder 12 - Injector Restricted"}
,{"P02C9","Cylinder 12 - Injector Leaking"}
,{"P02CA","Turbocharger/Supercharger B Overboost Condition"}
,{"P02CB","Turbocharger/Supercharger B Underboost Condition"}
,{"P02CC","Cylinder 1 Fuel Injector Offset Learning At Min Limit"}
,{"P02CD","Cylinder 1 Fuel Injector Offset Learning At Max Limit"}
,{"P02CE","Cylinder 2 Fuel Injector Offset Learning At Min Limit"}
,{"P02CF","Cylinder 2 Fuel Injector Offset Learning At Max Limit"}
,{"P02D0","Cylinder 3 Fuel Injector Offset Learning At Min Limit"}
,{"P02D1","Cylinder 3 Fuel Injector Offset Learning At Max Limit"}
,{"P02D2","Cylinder 4 Fuel Injector Offset Learning At Min Limit"}
,{"P02D3","Cylinder 4 Fuel Injector Offset Learning At Max Limit"}
,{"P02D4","Cylinder 5 Fuel Injector Offset Learning At Min Limit"}
,{"P02D5","Cylinder 5 Fuel Injector Offset Learning At Max Limit"}
,{"P02D6","Cylinder 6 Fuel Injector Offset Learning At Min Limit"}
,{"P02D7","Cylinder 6 Fuel Injector Offset Learning At Max Limit"}
,{"P02D8","Cylinder 7 Fuel Injector Offset Learning At Min Limit"}
,{"P02D9","Cylinder 7 Fuel Injector Offset Learning At Max Limit"}
,{"P02DA","Cylinder 8 Fuel Injector Offset Learning At Min Limit"}
,{"P02DB","Cylinder 8 Fuel Injector Offset Learning At Max Limit"}
,{"P02DC","Cylinder 9 Fuel Injector Offset Learning At Min Limit"}
,{"P02DD","Cylinder 9 Fuel Injector Offset Learning At Max Limit"}
,{"P02DE","Cylinder 10 Fuel Injector Offset Learning At Min Limit"}
,{"P02DF","Cylinder 10 Fuel Injector Offset Learning At Max Limit"}
,{"P02E0","Diesel Intake Air Flow Control Circuit/Open"}
,{"P02E1","Diesel Intake Air Flow Control Performance"}
,{"P02E2","Diesel Intake Air Flow Control Circuit Low"}
,{"P02E3","Diesel Intake Air Flow Control Circuit High"}
,{"P02E4","Diesel Intake Air Flow Control Stuck Open"}
,{"P02E5","Diesel Intake Air Flow Control Stuck Closed"}
,{"P02E6","Diesel Intake Air Flow Position Sensor Circuit"}
,{"P02E7","Diesel Intake Air Flow Position Sensor Circuit Range/Performance"}
,{"P02E8","Diesel Intake Air Flow Position Sensor Circuit Low"}
,{"P02E9","Diesel Intake Air Flow Position Sensor Circuit High"}
,{"P02EA","Diesel Intake Air Flow Position Sensor Circuit Intermittent/Erratic"}
,{"P02EB","Diesel Intake Air Flow Control Motor Current Range/Performance"}
,{"P02EC","Diesel Intake Air Flow Control System - High Air Flow Detected"}
,{"P02ED","Diesel Intake Air Flow Control System - Low Air Flow Detected"}
,{"P02EE","Cylinder 1 Injector Circuit Range/Performance"}
,{"P02EF","Cylinder 2 Injector Circuit Range/Performance"}
,{"P02F0","Cylinder 3 Injector Circuit Range/Performance"}
,{"P02F1","Cylinder 4 Injector Circuit Range/Performance"}
,{"P02F2","Cylinder 5 Injector Circuit Range/Performance"}
,{"P02F3","Cylinder 6 Injector Circuit Range/Performance"}
,{"P02F4","Cylinder 7 Injector Circuit Range/Performance"}
,{"P02F5","Cylinder 8 Injector Circuit Range/Performance"}
,{"P02F6","Cylinder 9 Injector Circuit Range/Performance"}
,{"P02F7","Cylinder 10 Injector Circuit Range/Performance"}
,{"P02F8","Cylinder 11 Injector Circuit Range/Performance"}
,{"P02F9","Cylinder 12 Injector Circuit Range/Performance"}
,{"P02FA","Diesel Intake Air Flow Position Sensor Minimum/Maximum Stop Performance"}
,{"P02FB","P02FC, P02FD, P02FE, P02FF ISO/SAE Reserved"}
,{"P0100","Mass or Volume Air Flow A Circuit Malfunction"}
,{"P0101","Mass or Volume Air Flow A Circuit Range/Performance Problem"}
,{"P0102","Mass or Volume Air Flow A Circuit Low Input"}
,{"P0103","Mass or Volume Air Flow A Circuit High Input"}
,{"P0104","Mass or Volume Air Flow A Circuit Intermittent"}
,{"P0105","Manifold Absolute Pressure/Barometric Pressure Circuit Malfunction"}
,{"P0106","Manifold Absolute Pressure/Barometric Pressure Circuit Range/Performance Problem"}
,{"P0107","Manifold Absolute Pressure/Barometric Pressure Circuit Low Input"}
,{"P0108","Manifold Absolute Pressure/Barometric Pressure Circuit High Input"}
,{"P0109","Manifold Absolute Pressure/Barometric Pressure Circuit Intermittent"}
,{"P010A","Mass or Volume Air Flow B Circuit"}
,{"P010B","Mass or Volume Air Flow B Circuit Range/Performance"}
,{"P010C","Mass or Volume Air Flow B Circuit Low"}
,{"P010D","Mass or Volume Air Flow B Circuit High"}
,{"P010E","Mass or Volume Air Flow B Circuit Intermittent/Erratic"}
,{"P010F","Mass or Volume Air Flow Sensor A/B Correlation"}
,{"P0110","Intake Air Temperature Circuit Malfunction Bank 1"}
,{"P0111","Intake Air Temperature Circuit Range/Performance Problem Bank 1"}
,{"P0112","Intake Air Temperature Circuit Low Input Bank 1"}
,{"P0113","Intake Air Temperature Circuit High Input Bank 1"}
,{"P0114","Intake Air Temperature Circuit Intermittent Bank 1"}
,{"P0115","Engine Coolant Temperature Sensor Circuit 1 Malfunction"}
,{"P0116","Engine Coolant Temperature Sensor Circuit 1 Range/Performance Problem"}
,{"P0117","Engine Coolant Temperature Sensor Circuit 1 Low Input"}
,{"P0118","Engine Coolant Temperature Sensor Circuit 1 High Input"}
,{"P0119","Engine Coolant Temperature Sensor Circuit 1 Intermittent"}
,{"P011A","Engine Coolant Temperature Sensor 1/2 Correlation"}
,{"P011B","Coolant Temperature/Intake Air Temperature Correlation"}
,{"P011C","Charge Air Temperature/Intake Air Temperature Correlation Bank 1"}
,{"P011D","Charge Air Temperature/Intake Air Temperature Correlation Bank 2"}
,{"P011E","P011F ISO/SAE Reserved"}
,{"P0120","Throttle Position Sensor/Switch A Circuit Malfunction"}
,{"P0121","Throttle Position Sensor/Switch A Circuit Range/Performance Problem"}
,{"P0122","Throttle Position Sensor/Switch A Circuit Low Input"}
,{"P0123","Throttle Position Sensor/Switch A Circuit High Input"}
,{"P0124","Throttle Position Sensor/Switch A Circuit Intermittent"}
,{"P0125","Insufficient Coolant Temperature for Closed Loop Fuel Control"}
,{"P0126","Insufficient Coolant Temperature for Stable Operation"}
,{"P0127","Intake Air Temperature Too High"}
,{"P0128","Coolant Thermostat (Coolant Temperature Below Thermostat Regulating Temperature)"}
,{"P0129","Barometric Pressure Too Low"}
,{"P012A","Turbocharger/Supercharger Inlet Pressure Sensor Circuit (Downstream of throttle valve)"}
,{"P012B","Turbocharger/Supercharger Inlet Pressure Sensor Circuit Range/Performance (Downstream of throttle valve)"}
,{"P012C","Turbocharger/Supercharger Inlet Pressure Sensor Circuit Low (Downstream of throttle valve)"}
,{"P012D","Turbocharger/Supercharger Inlet Pressure Sensor Circuit High (Downstream of throttle valve)"}
,{"P012E","Turbocharger/Supercharger Inlet Pressure Sensor Circuit Intermittent/Erratic (Downstream of throttle valve)"}
,{"P012F","Reserved"}
,{"P0130","02 Sensor Circuit Malfunction (Bank I Sensor 1)"}
,{"P0131","02 Sensor Circuit Low Voltage (Bank I Sensor I)"}
,{"P0132","02 Sensor Circuit High Voltage (Bank I Sensor 1)"}
,{"P0133","02 Sensor Circuit Slow Response (Bank 1 Sensor 1)"}
,{"P0134","02 Sensor Circuit No Activity Detected (Bank I Sensor 1)"}
,{"P0135","02 Sensor Heater Circuit Malfunction (Bank 1 Sensor 1)"}
,{"P0136","02 Sensor Circuit Malfunction (Bank I Sensor 2)"}
,{"P0137","02 Sensor Circuit Low Voltage (Bank I Sensor 2)"}
,{"P0138","02 Sensor Circuit High Voltage (Bank I Sensor 2)"}
,{"P0139","02 Sensor Circuit Slow Response (Bank 1 Sensor 2)"}
,{"P013A","O2 Sensor Slow Response - Rich to Lean (Bank 1 Sensor 2)"}
,{"P013B","O2 Sensor Slow Response - Lean to Rich (Bank 1 Sensor 2)"}
,{"P013C","O2 Sensor Slow Response - Rich to Lean (Bank 2 Sensor 2)"}
,{"P013D","O2 Sensor Slow Response - Lean to Rich (Bank 2 Sensor 2)"}
,{"P013E","O2 Sensor Delayed Response - Rich to Lean (Bank 1 Sensor 2)"}
,{"P013F","O2 Sensor Delayed Response - Lean to Rich (Bank 1 Sensor 2)"}
,{"P0140","02 Sensor Circuit No Activity Detected (Bank 1 Sensor 2)"}
,{"P0141","02 Sensor Heater Circuit Malfunction (Bank 1 Sensor 2)"}
,{"P0142","02 Sensor Circuit Malfunction (Bank 1 Sensor 3)"}
,{"P0143","02 Sensor Circuit Low Voltage (Bank 1 Sensor 3)"}
,{"P0144","02 Sensor Circuit High Voltage (Bank 1 Sensor 3)"}
,{"P0145","02 Sensor Circuit Slow Response (Bank 1 Sensor 3)"}
,{"P0146","02 Sensor Circuit No Activity Detected (Bank 1 Sensor 3)"}
,{"P0147","02 Sensor Heater Circuit Malfunction (Bank 1 Sensor 3)"}
,{"P0148","Fuel Delivery Error"}
,{"P0149","Fuel Timing Error"}
,{"P014A","O2 Sensor Delayed Response - Rich to Lean (Bank 2 Sensor 2)"}
,{"P014B","O2 Sensor Delayed Response - Lean to Rich (Bank 2 Sensor 2)"}
,{"P014C","O2 Sensor Slow Response - Rich to Lean (Bank 1 Sensor 1)"}
,{"P014D","O2 Sensor Slow Response - Lean to Rich (Bank 1 Sensor 1)"}
,{"P014E","O2 Sensor Slow Response - Rich to Lean (Bank 2 Sensor 1)"}
,{"P0150","02 Sensor Circuit Malfunction (Bank 2 Sensor 1)"}
,{"P0151","02 Sensor Circuit Low Voltage (Bank 2 Sensor 1)"}
,{"P0152","02 Sensor Circuit High Voltage (Bank 2 Sensor 1)"}
,{"P0153","02 Sensor Circuit Slow Response (Bank 2 Sensor 1)"}
,{"P0154","02 Sensor Circuit No Activity Detected (Bank 2 Sensor 1)"}
,{"P0155","02 Sensor Heater Circuit Malfunction (Bank 2 Sensor 1)"}
,{"P0156","02 Sensor Circuit Malfunction (Bank 2 Sensor 2)"}
,{"P0157","02 Sensor Circuit Low Voltage (Bank 2 Sensor 2)"}
,{"P0158","02 Sensor Circuit High Voltage (Bank 2 Sensor 2)"}
,{"P0159","02 Sensor Circuit Slow Response (Bank 2 Sensor 2)"}
,{"P015A","O2 Sensor Delayed Response - Rich to Lean (Bank 1 Sensor 1)"}
,{"P015B","O2 Sensor Delayed Response - Lean to Rich (Bank 1 Sensor 1)"}
,{"P015C","O2 Sensor Delayed Response - Rich to Lean (Bank 2 Sensor 1)"}
,{"P015D","O2 Sensor Delayed Response - Lean to Rich (Bank 2 Sensor 1)"}
,{"P015E","P015F ISO/SAE Reserved"}
,{"P0160","02 Sensor Circuit No Activity Detected (Bank 2 Sensor 2)"}
,{"P0161","02 Sensor Heater Circuit Malfunction (Bank 2 Sensor 2)"}
,{"P0162","02 Sensor Circuit Malfunction (Bank 2 Sensor 3)"}
,{"P0163","02 Sensor Circuit Low Voltage (Bank 2 Sensor 3)"}
,{"P0164","02 Sensor Circuit High Voltage (Bank 2 Sensor 3)"}
,{"P0165","02 Sensor Circuit Slow Response (Bank 2 Sensor 3)"}
,{"P0166","02 Sensor Circuit No Activity Detected (Bank 2 Sensor 3)"}
,{"P0167","02 Sensor Heater Circuit Malfunction (Bank 2 Sensor 3)"}
,{"P0168","Temperature Too High"}
,{"P0169","Incorrect Fuel Composition"}
,{"P016A","P016B, P016C, P016D, P016E, P016F ISO/SAE Reserved"}
,{"P0170","Fuel Trim Malfunction (Bank 1)"}
,{"P0171","System too Lean (Bank 1)"}
,{"P0172","System too Rich (Bank 1)"}
,{"P0173","Fuel Trim Malfunction (Bank 2)"}
,{"P0174","System too Lean (Bank 2)"}
,{"P0175","System too Rich (Bank 2)"}
,{"P0176","Fuel Composition Sensor Circuit Malfunction"}
,{"P0177","Fuel Composition Sensor Circuit Range/Performance"}
,{"P0178","Fuel Composition Sensor Circuit Low Input"}
,{"P0179","Fuel Composition Sensor Circuit High Input"}
,{"P017A","P017B, P017C, P017D, P017E, P017F ISO/SAE Reserved"}
,{"P0180","Fuel Temperature Sensor A Circuit Malfunction"}
,{"P0181","Fuel Temperature Sensor A Circuit Range/Performance"}
,{"P0182","Fuel Temperature Sensor A Circuit Low Input"}
,{"P0183","Fuel Temperature Sensor A Circuit High Input"}
,{"P0184","Fuel Temperature Sensor A Circuit Intermittent"}
,{"P0185","Fuel Temperature Sensor B Circuit Malfunction"}
,{"P0186","Fuel Temperature Sensor B Circuit Range/Performance"}
,{"P0187","Fuel Temperature Sensor B Circuit Low Input"}
,{"P0188","Fuel Temperature Sensor B Circuit High Input"}
,{"P0189","Fuel Temperature Sensor B Circuit Intermittent"}
,{"P018A","Fuel Pressure Sensor B Circuit"}
,{"P018B","Fuel Pressure Sensor B Circuit Range/Performance"}
,{"P018C","Fuel Pressure Sensor B Circuit Low"}
,{"P018D","Fuel Pressure Sensor B Circuit High"}
,{"P018E","Fuel Pressure Sensor B Circuit Intermittent/Erratic"}
,{"P018F","Fuel System Over Pressure Relief Valve Frequent Activation"}
,{"P0190","Fuel Rail Pressure Sensor A Circuit"}
,{"P0191","Fuel Rail Pressure Sensor A Circuit Range/Performance"}
,{"P0192","Fuel Rail Pressure Sensor A Circuit Low Input"}
,{"P0193","Fuel Rail Pressure Sensor A Circuit High Input"}
,{"P0194","Fuel Rail Pressure Sensor A Circuit Intermittent"}
,{"P0195","Engine Oil Temperature Sensor Malfunction"}
,{"P0196","Engine Oil Temperature Sensor Range/Performance"}
,{"P0197","Engine Oil Temperature Sensor Low"}
,{"P0198","Engine Oil Temperature Sensor High"}
,{"P0199","Engine Oil Temperature Sensor Intermittent"}
,{"P019A","P01FF ISO/SAE Reserved"}
};