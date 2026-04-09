// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btClock
// Entry Point: 00fa7a6c
// Size: 56 bytes
// Signature: undefined __thiscall btClock(btClock * this, btClock * param_1)


/* btClock::btClock(btClock const&) */

void __thiscall btClock::btClock(btClock *this,btClock *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *(undefined8 **)this = puVar1;
  uVar2 = **(undefined8 **)param_1;
  puVar1[1] = (*(undefined8 **)param_1)[1];
  *puVar1 = uVar2;
  return;
}


