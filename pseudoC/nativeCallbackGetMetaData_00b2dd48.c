// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nativeCallbackGetMetaData
// Entry Point: 00b2dd48
// Size: 188 bytes
// Signature: undefined __thiscall nativeCallbackGetMetaData(AndroidCloudDevice * this, vector * param_1, CLOUD_ERROR param_2, uint param_3)


/* AndroidCloudDevice::nativeCallbackGetMetaData(std::__ndk1::vector<ICloudDevice::MetaData,
   std::__ndk1::allocator<ICloudDevice::MetaData> > const&, ICloudDevice::CLOUD_ERROR, unsigned int)
    */

void __thiscall
AndroidCloudDevice::nativeCallbackGetMetaData
          (AndroidCloudDevice *this,vector *param_1,CLOUD_ERROR param_2,uint param_3)

{
  void *__dest;
  undefined8 uVar1;
  long lVar2;
  size_t __n;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  
  lVar4 = *(long *)(this + 0x20);
  lVar2 = *(long *)(this + 0x28) - lVar4;
  if (lVar2 != 0) {
    uVar5 = 0;
    do {
      puVar6 = *(uint **)(lVar4 + uVar5 * 8);
      if (*puVar6 == param_3) {
        __dest = (void *)(lVar4 + uVar5 * 8);
        __n = *(long *)(this + 0x28) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        uVar1 = *(undefined8 *)(puVar6 + 4);
        plVar3 = *(long **)(*(long *)(puVar6 + 2) + 0x18);
        lVar4 = *plVar3;
        *(size_t *)(this + 0x28) = (long)__dest + __n;
        (**(code **)(lVar4 + 0x10))(plVar3,param_1,param_2,uVar1);
        operator_delete(puVar6);
        return;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(lVar2 >> 3));
  }
  return;
}


