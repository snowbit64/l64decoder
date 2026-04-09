// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LogManager
// Entry Point: 006d121c
// Size: 48 bytes
// Signature: undefined __thiscall LogManager(LogManager * this)


/* LogManager::LogManager() */

void __thiscall LogManager::LogManager(LogManager *this)

{
  Logger *this_00;
  
  this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 006d1238 to 006d123b has its CatchHandler @ 006d124c */
  Logger::Logger(this_00);
  *(Logger **)this = this_00;
  return;
}


