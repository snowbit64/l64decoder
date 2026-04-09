// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VisibilityConditionManager
// Entry Point: 00a5b454
// Size: 56 bytes
// Signature: undefined __thiscall VisibilityConditionManager(VisibilityConditionManager * this)


/* VisibilityConditionManager::VisibilityConditionManager() */

void __thiscall
VisibilityConditionManager::VisibilityConditionManager(VisibilityConditionManager *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(VisibilityConditionManager **)this = this + 8;
                    /* try { // try from 00a5b478 to 00a5b47f has its CatchHandler @ 00a5b48c */
  Mutex::Mutex((Mutex *)(this + 0x18),true);
  return;
}


