seal_observer_cplus
=========================================
Observer Design Pattern example in phases

Scenario - Ringed Seal Center Application
=========================================

There is a Nature Center for managing the Ringed Seal strain status in Saimaa Finland.
This Center is responsible of recording the number and condition of ringed seals.
It reports the status to public audience as well as to WWF and other international partners + maintains database for research and statistics.

Phase 1 - Original Requirements
================================

* Saimaa Seal Center class 
  * Records the status of seal strain in Saimaa Finland
  * Data is simply the number of seals alive
  
* Saimaa Seal Web Display
  * Displays the current status
  
## Implementation ---

Observer pattern roles identified:
* Subject: Seal Center Class (Publisher)
* Observers: Web display (Subscribers)

### Classes
* SealCenter (main application)
* SealWebDisplay

Phase 3 - Another Display added
================================

* Seal Mobile App Display

## Implementation ---

### Interfaces
* SealDisplay
### Classes
* SealCenter (main application)
* SealWebDisplay (implements SealDisplay)
* SealMobileDisplay (implements SealDisplay)


Phase 4 - WWF Reporter. Observer is born 
========================================

* More Observers
  * WWF Reporter 
  
## Implementation changes

As the latest object is from totally different class family, we need a distinct interface for observers.
At the same time we can purge the display interface a bit.

### Interfaces
* SealDisplay
* Observer
### Classes
* SealCenter (main application)
* SealWebDisplay (implements SealDisplay and Observer)
* SealMobileDisplay (implements SealDisplay and Observer)
* WWFReporter (implements Observer)

Phase 5 - Subject interface. Data content enrichment
====================================================

* More data for the Seal Center
  * Discrete counts of adult and up seals


## Implementation changes

As the latest object is from totally different class family, we need a distinct interface for observers.
At the same time we can purge the display interface a bit.

### Interfaces
* SealDisplay
* Observer (with class types)
* Subject (with class types)
### Classes
* SealCenter (main application)
* SealStateData (DTO class for storing the seal strain data details)
* SealWebDisplay (implements SealDisplay and Observer)
* SealMobileDisplay (implements SealDisplay and Observer)
* WWFReporter (implements Observer)


