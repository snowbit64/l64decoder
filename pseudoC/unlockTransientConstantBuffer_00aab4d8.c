// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlockTransientConstantBuffer
// Entry Point: 00aab4d8
// Size: 20 bytes
// Signature: undefined __thiscall unlockTransientConstantBuffer(NullCommandBuffer * this, uint param_1, IConstantBuffer * param_2)


/* NullCommandBuffer::unlockTransientConstantBuffer(unsigned int, IConstantBuffer*) */

void __thiscall
NullCommandBuffer::unlockTransientConstantBuffer
          (NullCommandBuffer *this,uint param_1,IConstantBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aab4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x18))(param_2,this);
  return;
}


