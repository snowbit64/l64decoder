// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ConvertTo
// Entry Point: 00cee174
// Size: 68 bytes
// Signature: undefined __thiscall ConvertTo(TimerBase * this, ulong param_1, Unit param_2)


/* CryptoPP::TimerBase::ConvertTo(unsigned long, CryptoPP::TimerBase::Unit) */

undefined  [16] __thiscall
CryptoPP::TimerBase::ConvertTo(TimerBase *this,ulong param_1,Unit param_2)

{
  ulong uVar1;
  double dVar2;
  undefined auVar3 [16];
  
  dVar2 = (double)NEON_ucvtf(*(undefined8 *)(&DAT_005175e0 + (ulong)param_2 * 8));
  uVar1 = (**(code **)(*(long *)this + 8))();
  auVar3._0_8_ = ((double)(unkuint9)param_1 * dVar2) / (double)(unkuint9)uVar1;
  auVar3._8_8_ = 0;
  return auVar3;
}


