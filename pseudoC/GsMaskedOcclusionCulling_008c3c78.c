// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GsMaskedOcclusionCulling
// Entry Point: 008c3c78
// Size: 168 bytes
// Signature: undefined __thiscall GsMaskedOcclusionCulling(GsMaskedOcclusionCulling * this, uint param_1, uint param_2)


/* GsMaskedOcclusionCulling::GsMaskedOcclusionCulling(unsigned int, unsigned int) */

void __thiscall
GsMaskedOcclusionCulling::GsMaskedOcclusionCulling
          (GsMaskedOcclusionCulling *this,uint param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(this + 8) = 0x3dcccccd;
  plVar1 = (long *)MaskedOcclusionCulling::Create(3);
  *(long **)(this + 0x10) = plVar1;
  uVar3 = CONCAT44(param_2 + 3,param_1 + 7) & 0xfffffffcfffffff8;
  lVar2 = *plVar1;
  uVar4 = NEON_cmeq(uVar3,0,4);
  uVar4 = NEON_bit(uVar3,0x400000008,uVar4,1);
  *(undefined8 *)this = uVar4;
  (**(code **)(lVar2 + 0x18))(*(undefined4 *)(this + 8));
  (**(code **)**(undefined8 **)(this + 0x10))
            (*(undefined8 **)(this + 0x10),*(undefined4 *)this,*(undefined4 *)(this + 4));
                    /* WARNING: Could not recover jumptable at 0x008c3d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x10) + 0x28))();
  return;
}


