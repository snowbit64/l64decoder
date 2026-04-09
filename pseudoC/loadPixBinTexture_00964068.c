// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadPixBinTexture
// Entry Point: 00964068
// Size: 544 bytes
// Signature: undefined __cdecl loadPixBinTexture(char * param_1, PIXEL_FORMAT param_2, IRenderDevice * param_3)


/* TextureUtil::loadPixBinTexture(char const*, PixelFormat::PIXEL_FORMAT, IRenderDevice*) */

long * TextureUtil::loadPixBinTexture(char *param_1,PIXEL_FORMAT param_2,IRenderDevice *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  void *pvVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  void *local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  uint local_ac;
  int iStack_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  PIXEL_FORMAT local_94;
  undefined local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar5 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,
                                    false);
  plVar10 = plVar5;
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x48))(plVar5);
    pvVar7 = operator_new__(uVar6);
    uVar8 = (**(code **)(*plVar5 + 0x48))(plVar5);
    (**(code **)(*plVar5 + 0x28))(plVar5,pvVar7,uVar8);
    uVar4 = PixelFormatUtil::getMemorySize
                      (*(uint *)((long)pvVar7 + 8),*(uint *)((long)pvVar7 + 0xc),1,param_2);
    pvVar9 = operator_new__((ulong)uVar4);
    local_ac = *(uint *)((long)pvVar7 + 8);
    iStack_a8 = *(int *)((long)pvVar7 + 0xc);
    if (iStack_a8 != 0) {
      iVar12 = 0;
      uVar2 = 0;
      if (iStack_a8 * local_ac != 0) {
        uVar2 = uVar4 / (iStack_a8 * local_ac);
      }
      iVar1 = *(int *)((long)pvVar7 + 4);
      do {
        if (local_ac != 0) {
          iVar11 = 0;
          uVar6 = (ulong)local_ac;
          do {
            memcpy((void *)((long)pvVar9 + (ulong)(uVar2 * iVar11 + iVar12 * uVar2 * local_ac)),
                   (void *)((long)pvVar7 + (ulong)(uVar2 * iVar11 + iVar12 * uVar2 * iVar1) + 0x10),
                   (ulong)uVar2);
            iVar11 = iVar11 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iStack_a8);
    }
    local_9c = 0;
    local_74 = 0;
    local_b8 = 0;
    local_b4 = 0xffffffff00000000;
    uStack_7c = 0x3f80000000000000;
    local_84 = 0;
    local_90 = 0;
    local_a4 = 0;
    local_8c = 0;
    local_c0 = pvVar9;
    local_94 = param_2;
    local_70 = param_1;
    uVar8 = (**(code **)(*(long *)param_3 + 0x138))(param_3);
    plVar10 = (long *)(**(code **)(*(long *)param_3 + 0x100))(param_3,uVar8,&local_c0);
    operator_delete__(pvVar7);
    operator_delete__(pvVar9);
    (**(code **)(*plVar5 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar10;
}


