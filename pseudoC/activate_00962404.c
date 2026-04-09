// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00962404
// Size: 296 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* Texture::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

bool Texture::activate(IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  IRenderDevice *pIVar1;
  ushort uVar2;
  ICommandBuffer *pIVar3;
  TextureStreamingManager *this;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  BitmapImage *pBVar8;
  
  if ((param_1[0x20] == (IRenderDevice)0x0) ||
     ((*(int *)(param_1 + 0x18) != 0 &&
      (((*(ushort *)(param_1 + 0x48) >> 6 & 1) == 0 || (*(int *)(param_1 + 0x18) != 2))))))
  goto LAB_00962510;
  lVar6 = *(long *)param_2;
  pBVar8 = *(BitmapImage **)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x18) = 4;
  pIVar3 = (ICommandBuffer *)(**(code **)(lVar6 + 0x138))(param_2);
  lVar6 = allocateTexture((Texture *)param_1,pBVar8,(IRenderDevice *)param_2,pIVar3,
                          *(ImageStreamingDesc **)(param_1 + 0x60));
  *(long *)(param_1 + 0x68) = lVar6;
  if (lVar6 != 0) {
    if ((*(ushort *)(param_1 + 0x48) >> 3 & 1) != 0) {
      pvVar7 = *(void **)(param_1 + 0x60);
      if (*(int *)((long)pvVar7 + 0xc) != 0) {
        this = (TextureStreamingManager *)TextureStreamingManager::getInstance();
        pIVar1 = param_1 + 0x31;
        if (((byte)param_1[0x30] & 1) != 0) {
          pIVar1 = *(IRenderDevice **)(param_1 + 0x40);
        }
        uVar4 = TextureStreamingManager::registerTexture
                          (this,(Texture *)param_1,(char *)pIVar1,
                           *(ImageStreamingDesc **)(param_1 + 0x60));
        pvVar7 = *(void **)(param_1 + 0x60);
        if ((uVar4 & 1) != 0) {
          uVar2 = *(ushort *)(param_1 + 0x48);
          *(undefined8 *)((long)pvVar7 + 0x10) = 0;
          *(ushort *)(param_1 + 0x48) = uVar2 | 0x10;
        }
      }
      if (*(void **)((long)pvVar7 + 0x10) == (void *)0x0) {
        *(undefined8 *)((long)pvVar7 + 0x10) = 0;
LAB_009624ec:
        operator_delete(pvVar7);
      }
      else {
        operator_delete__(*(void **)((long)pvVar7 + 0x10));
        pvVar5 = *(void **)(param_1 + 0x60);
        *(undefined8 *)((long)pvVar7 + 0x10) = 0;
        pvVar7 = pvVar5;
        if (pvVar5 != (void *)0x0) goto LAB_009624ec;
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 3;
  }
  (**(code **)(*(long *)param_1 + 0x20))(param_1);
LAB_00962510:
  return *(int *)(param_1 + 0x18) == 3;
}


