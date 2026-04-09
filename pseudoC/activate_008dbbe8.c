// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008dbbe8
// Size: 552 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* Precipitation::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

void Precipitation::activate(IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined2 uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  void *local_f0;
  int local_e8;
  undefined8 local_e4;
  char *local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  iVar12 = *(int *)(param_1 + 0x60);
  if (iVar12 == 0) {
    local_54 = 0;
    uStack_5c = 0;
    local_64 = 0;
    uStack_9c = 0xa00000000;
    uStack_ac = 0;
    local_a4 = 0x600000000;
    local_4c = 1;
    local_b4 = 0x100000000;
    local_84 = 0;
    uStack_7c = 0xf00000000;
    local_b8 = 2;
    local_94 = 0;
    uStack_6c = 0;
    local_74 = 0;
    uStack_8c = 8;
    plVar8 = (long *)(**(code **)(*(long *)param_2 + 0x128))(param_2,&local_b8);
    *(long **)(param_1 + 0xd8) = plVar8;
    local_d0 = 0;
    iVar12 = *(int *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x38) = 0x25;
    iVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,0);
    local_c8 = iVar12 * iVar7 * 4;
    uStack_c4 = 8;
    local_c0 = "Precipitation";
    uVar9 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
    uVar9 = (**(code **)(*(long *)param_2 + 0x108))(param_2,uVar9,&local_d0);
    uVar3 = *(uint *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 200) = uVar9;
    local_e8 = uVar3 * 0xc;
    local_e4 = 1;
    pvVar10 = operator_new__((ulong)(uVar3 * 6) << 1);
    if (uVar3 != 0) {
      uVar11 = 0;
      uVar13 = 0;
      do {
        iVar12 = (int)uVar13;
        uVar4 = (ushort)(iVar12 << 2) | 2;
        *(ushort *)((long)pvVar10 + (ulong)(uVar11 + 1) * 2) = (ushort)(iVar12 << 2) | 1;
        uVar5 = (undefined2)(iVar12 << 2);
        *(undefined2 *)((long)pvVar10 + (ulong)uVar11 * 2) = uVar5;
        *(ushort *)((long)pvVar10 + (ulong)(uVar11 + 2) * 2) = uVar4;
        *(ushort *)((long)pvVar10 + (ulong)(uVar11 + 3) * 2) = uVar4;
        uVar1 = uVar11 + 4;
        uVar2 = uVar11 + 5;
        uVar13 = uVar13 + 1;
        uVar11 = uVar11 + 6;
        *(ushort *)((long)pvVar10 + (ulong)uVar1 * 2) = (ushort)(iVar12 << 2) | 3;
        *(undefined2 *)((long)pvVar10 + (ulong)uVar2 * 2) = uVar5;
      } while (uVar3 != uVar13);
    }
    local_d8 = "Precipitation";
    local_f0 = pvVar10;
    uVar9 = (**(code **)(*(long *)param_2 + 0x138))(param_2);
    uVar9 = (**(code **)(*(long *)param_2 + 0x110))(param_2,uVar9,&local_f0);
    *(undefined8 *)(param_1 + 0xd0) = uVar9;
    operator_delete__(pvVar10);
    iVar12 = 3;
    if ((*(long *)(param_1 + 0xd0) == 0 || *(long *)(param_1 + 200) == 0) ||
        *(long *)(param_1 + 0xd8) == 0) {
      iVar12 = 4;
    }
    *(int *)(param_1 + 0x60) = iVar12;
  }
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar12 == 3);
}


