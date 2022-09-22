# Nissan-LEAF-Battery-Downgrade
Information on how downgrading the battery on LEAF models work

## Nissan ZE0 (2011-2012)
No downgrade path available

## Nissan AZE0 (2013-2017) 
### 30kWh to 24kWh Downgrade
The 30kWh LEAF can be downgraded to a 24kWh pack from a 2013-2016 LEAF. The only thing required is to pair in the replacement battery with Leafspy Pro, to clear the P3102 Battery ID DTC.

## Nissan ZE1 (2018-202#)
### 62kWh to 40kWh Downgrade
The 62kWh ZE1 LEAF can be downgraded only to the ZE1 40kWh battery. There is one big problem with this downgrade though. Charging the battery wont work since the 0x1ED message that the 62kWh battery usually sends will be missing from the 40kWh LBC. To get around this issue, a CAN message generator needs to be added to the EV-CAN bus system, that periodically transmits this message onto the bus. See the "40kWhinto62kWh.ino" for an example, an arduino with CAN-shield is good enough for this.

Apart from not being able to charge, there is another problem with this downgrade. Quickchargers will only allow the battery to be charged to roughly 65% (40/62=64%). The only way to fix this is with a CAN-bridge, that modifies the 0x59E message. It is not mandatory to fix this, you can use the vehicle quite OK with this bug still present.
