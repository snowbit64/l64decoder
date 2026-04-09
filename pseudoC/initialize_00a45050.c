// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initialize
// Entry Point: 00a45050
// Size: 48 bytes
// Signature: undefined __thiscall initialize(ShadowDenoiser * this, uint param_1, uint param_2)


/* ShadowDenoiser::initialize(unsigned int, unsigned int) */

void __thiscall ShadowDenoiser::initialize(ShadowDenoiser *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x18);
  uVar2 = *(uint *)(this + 0x1c);
  if (uVar1 != param_1 || uVar2 != param_2) {
    *(uint *)(this + 0x18) = param_1;
    *(uint *)(this + 0x1c) = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00a4507c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))(this,uVar1 != param_1 || uVar2 != param_2);
  return;
}


