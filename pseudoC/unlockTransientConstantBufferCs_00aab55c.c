// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlockTransientConstantBufferCs
// Entry Point: 00aab55c
// Size: 20 bytes
// Signature: undefined __thiscall unlockTransientConstantBufferCs(NullCommandBuffer * this, uint param_1, IConstantBuffer * param_2)


/* NullCommandBuffer::unlockTransientConstantBufferCs(unsigned int, IConstantBuffer*) */

void __thiscall
NullCommandBuffer::unlockTransientConstantBufferCs
          (NullCommandBuffer *this,uint param_1,IConstantBuffer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00aab56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x18))(param_2,this);
  return;
}


