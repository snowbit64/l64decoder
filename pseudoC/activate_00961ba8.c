// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 00961ba8
// Size: 348 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* SingleColorTexture::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

void SingleColorTexture::activate
               (IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  IRenderDevice *pIVar1;
  long lVar2;
  IRenderDevice IVar3;
  IRenderDevice IVar4;
  IRenderDevice IVar5;
  IRenderDevice IVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined local_210 [384];
  undefined *local_90;
  undefined2 local_88;
  ulong local_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  int iStack_68;
  undefined4 local_64;
  undefined local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  char *local_40;
  long local_38;
  
  puVar11 = local_210;
  lVar7 = tpidr_el0;
  local_38 = *(long *)(lVar7 + 0x28);
  iVar9 = *(int *)(param_1 + 0x18);
  if ((param_1[0x20] != (IRenderDevice)0x0) && (iVar9 == 0)) {
    iStack_68 = *(int *)(param_1 + 0x50);
    local_84 = 0xffffffffffffffff;
    local_5c = 0x100000001;
    uStack_4c = 0x3f80000000000000;
    local_54 = 0;
    uStack_74 = 0x100000001;
    local_7c = 0x400000004;
    IVar3 = param_1[0x78];
    IVar4 = param_1[0x79];
    lVar10 = 0;
    IVar5 = param_1[0x7a];
    IVar6 = param_1[0x7b];
    lVar2 = 6;
    if (iStack_68 != 2) {
      lVar2 = 1;
    }
    local_88 = 0;
    local_60 = 0;
    local_44 = 0;
    local_6c = 0;
    local_64 = 5;
    do {
      lVar12 = 0;
      do {
        pIVar1 = (IRenderDevice *)(puVar11 + lVar12);
        lVar12 = lVar12 + 0x40;
        *pIVar1 = IVar3;
        pIVar1[1] = IVar4;
        pIVar1[2] = IVar5;
        pIVar1[3] = IVar6;
        pIVar1[4] = IVar3;
        pIVar1[5] = IVar4;
        pIVar1[6] = IVar5;
        pIVar1[7] = IVar6;
        pIVar1[8] = IVar3;
        pIVar1[9] = IVar4;
        pIVar1[10] = IVar5;
        pIVar1[0xb] = IVar6;
        pIVar1[0xc] = IVar3;
        pIVar1[0xd] = IVar4;
        pIVar1[0xe] = IVar5;
        pIVar1[0xf] = IVar6;
        pIVar1[0x10] = IVar3;
        pIVar1[0x11] = IVar4;
        pIVar1[0x12] = IVar5;
        pIVar1[0x13] = IVar6;
        pIVar1[0x14] = IVar3;
        pIVar1[0x15] = IVar4;
        pIVar1[0x16] = IVar5;
        pIVar1[0x17] = IVar6;
        pIVar1[0x18] = IVar3;
        pIVar1[0x19] = IVar4;
        pIVar1[0x1a] = IVar5;
        pIVar1[0x1b] = IVar6;
        pIVar1[0x1c] = IVar3;
        pIVar1[0x1d] = IVar4;
        pIVar1[0x1e] = IVar5;
        pIVar1[0x1f] = IVar6;
        pIVar1[0x20] = IVar3;
        pIVar1[0x21] = IVar4;
        pIVar1[0x22] = IVar5;
        pIVar1[0x23] = IVar6;
        pIVar1[0x24] = IVar3;
        pIVar1[0x25] = IVar4;
        pIVar1[0x26] = IVar5;
        pIVar1[0x27] = IVar6;
        pIVar1[0x28] = IVar3;
        pIVar1[0x29] = IVar4;
        pIVar1[0x2a] = IVar5;
        pIVar1[0x2b] = IVar6;
        pIVar1[0x2c] = IVar3;
        pIVar1[0x2d] = IVar4;
        pIVar1[0x2e] = IVar5;
        pIVar1[0x2f] = IVar6;
        pIVar1[0x30] = IVar3;
        pIVar1[0x31] = IVar4;
        pIVar1[0x32] = IVar5;
        pIVar1[0x33] = IVar6;
        pIVar1[0x34] = IVar3;
        pIVar1[0x35] = IVar4;
        pIVar1[0x36] = IVar5;
        pIVar1[0x37] = IVar6;
        pIVar1[0x38] = IVar3;
        pIVar1[0x39] = IVar4;
        pIVar1[0x3a] = IVar5;
        pIVar1[0x3b] = IVar6;
        pIVar1[0x3c] = IVar3;
        pIVar1[0x3d] = IVar4;
        pIVar1[0x3e] = IVar5;
        pIVar1[0x3f] = IVar6;
      } while (lVar12 != 0x40);
      lVar10 = lVar10 + 1;
      puVar11 = puVar11 + 0x40;
    } while (lVar10 != lVar2);
    local_84 = local_84 & 0xffffffff00000000;
    local_40 = "SingleColorTexture";
    local_90 = local_210;
    uVar8 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
    uVar8 = (**(code **)(*(long *)param_2 + 0x100))(param_2,uVar8,&local_90);
    iVar9 = 3;
    *(undefined8 *)(param_1 + 0x68) = uVar8;
    *(undefined4 *)(param_1 + 0x18) = 3;
  }
  if (*(long *)(lVar7 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar9 == 3);
}


