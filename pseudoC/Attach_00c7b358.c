// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Attach
// Entry Point: 00c7b358
// Size: 128 bytes
// Signature: undefined __thiscall Attach(BufferedTransformation * this, BufferedTransformation * param_1)


/* CryptoPP::BufferedTransformation::Attach(CryptoPP::BufferedTransformation*) */

void __thiscall
CryptoPP::BufferedTransformation::Attach
          (BufferedTransformation *this,BufferedTransformation *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = (**(code **)(*(long *)this + 0x160))();
  if (lVar1 != 0) {
    plVar2 = (long *)(**(code **)(*(long *)this + 0x160))(this);
    uVar3 = (**(code **)(*plVar2 + 0x158))();
    if ((uVar3 & 1) != 0) {
      this = (BufferedTransformation *)(**(code **)(*(long *)this + 0x160))(this);
      lVar1 = 0x2f;
      goto LAB_00c7b3bc;
    }
  }
  lVar1 = 0x2e;
LAB_00c7b3bc:
                    /* WARNING: Could not recover jumptable at 0x00c7b3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + lVar1 * 8))(this,param_1);
  return;
}


