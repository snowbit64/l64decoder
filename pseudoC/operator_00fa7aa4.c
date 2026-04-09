// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00fa7aa4
// Size: 20 bytes
// Signature: undefined __thiscall operator=(btClock * this, btClock * param_1)


/* btClock::TEMPNAMEPLACEHOLDERVALUE(btClock const&) */

void __thiscall btClock::operator=(btClock *this,btClock *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)this;
  uVar2 = **(undefined8 **)param_1;
  puVar1[1] = (*(undefined8 **)param_1)[1];
  *puVar1 = uVar2;
  return;
}


