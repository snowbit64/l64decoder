// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: staticThreadEntry_async
// Entry Point: 00b24d5c
// Size: 80 bytes
// Signature: undefined __cdecl staticThreadEntry_async(void * param_1, bool * param_2)


/* AsyncFileLogSink::staticThreadEntry_async(void*, bool volatile&) */

undefined8 AsyncFileLogSink::staticThreadEntry_async(void *param_1,bool *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  while (cVar1 == '\0') {
    Semaphore::wait();
    writePendings();
    cVar1 = *param_2;
  }
  return 0;
}


