**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
running – process is currently performing tasks
sleeping – either interruptible(process is waiting for an event)
		or uninerruptable(process is waiting on io)
zombie – process was abandoned by its parent but not killed and has now succumb to ghoulification due to high amounts of radiation.



**2. What is a zombie process?**
	process parent creates process child. Parent closes with out closing child. Child just sits there with no clue what to do. Ive seen this behavior in linux but not actually seen it happen in windows.

	RL example: A game when started creates a new process to handle voice chat. I closed the game and reopened it and could not get voice to work again. After several attempts at closing the game and reopening I opened ‘top’ and saw a load of voice processes still running while the game was closed. After manually closing the voice processes the ingame voice chat worked again.


**3. How does a zombie process get created? How does one get destroyed?**
see above 2 answers


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

non compiled code needs an interpreter to read the code and perform actions. This is inefficient. Having the code that is compiled leads to less run time errors as most of the errors would have been caught by the compiler. Also it can lead to more efficient code with less used memory and a faster run time.
