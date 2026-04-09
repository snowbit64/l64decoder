// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: transition
// Entry Point: 00becc9c
// Size: 120 bytes
// Signature: undefined __thiscall transition(TransitionsDesc * this, ICommandBuffer * param_1, uint param_2, uint param_3)


/* AdhocShader::TransitionsDesc::transition(ICommandBuffer*, unsigned int, unsigned int) */

void __thiscall
AdhocShader::TransitionsDesc::transition
          (TransitionsDesc *this,ICommandBuffer *param_1,uint param_2,uint param_3)

{
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,*(undefined4 *)(this + 0x100),this,*(undefined4 *)(this + 0x208),this + 0x108,0
             ,param_2);
                    /* WARNING: Could not recover jumptable at 0x00becd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x120))
            (param_1,*(undefined4 *)(this + 0x230),this + 0x210,*(undefined4 *)(this + 600),
             this + 0x238,1,param_3);
  return;
}


