// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeWriteOnlyConstantBuffer
// Entry Point: 00aa8800
// Size: 144 bytes
// Signature: undefined __cdecl makeWriteOnlyConstantBuffer(IRenderDevice * param_1, uint param_2, IConstantBuffer * * param_3)


/* RenderDeviceUtil::makeWriteOnlyConstantBuffer(IRenderDevice*, unsigned int, IConstantBuffer**) */

void RenderDeviceUtil::makeWriteOnlyConstantBuffer
               (IRenderDevice *param_1,uint param_2,IConstantBuffer **param_3)

{
  long lVar1;
  undefined8 uVar2;
  IConstantBuffer *pIVar3;
  uint local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  local_40 = 8;
  local_50[0] = param_2;
  uVar2 = (**(code **)(*(long *)param_1 + 0x138))();
  pIVar3 = (IConstantBuffer *)(**(code **)(*(long *)param_1 + 0x118))(param_1,uVar2,local_50);
  *param_3 = pIVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pIVar3 != (IConstantBuffer *)0x0);
}


