// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillDefaultMaterialDesc
// Entry Point: 0094fce8
// Size: 104 bytes
// Signature: undefined __thiscall fillDefaultMaterialDesc(MaterialManager * this, MaterialDesc * param_1, STREAM_QUEUE param_2)


/* MaterialManager::fillDefaultMaterialDesc(MaterialDesc&, StreamManager::STREAM_QUEUE) */

void __thiscall
MaterialManager::fillDefaultMaterialDesc
          (MaterialManager *this,MaterialDesc *param_1,STREAM_QUEUE param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0x3f8000003f800000;
  local_40 = 0x3f8000003f800000;
  uVar2 = getSingleColorTexture(this,(float *)&local_40,0,param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


