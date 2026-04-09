// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nativeHandleUploadError
// Entry Point: 00b2dedc
// Size: 68 bytes
// Signature: undefined __thiscall nativeHandleUploadError(AndroidCloudDevice * this, MetaData * param_1, CLOUD_ERROR param_2, uint param_3)


/* AndroidCloudDevice::nativeHandleUploadError(ICloudDevice::MetaData const&,
   ICloudDevice::CLOUD_ERROR, unsigned int) */

void __thiscall
AndroidCloudDevice::nativeHandleUploadError
          (AndroidCloudDevice *this,MetaData *param_1,CLOUD_ERROR param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 0x10) - *(long *)(this + 8);
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      lVar4 = *(long *)(*(long *)(this + 8) + uVar3 * 8);
      if (*(uint *)(lVar4 + 0x20) == param_3) {
        plVar2 = *(long **)(lVar4 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00b2df1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x20))(plVar2,param_1,param_2);
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(lVar1 >> 3));
  }
  return;
}


