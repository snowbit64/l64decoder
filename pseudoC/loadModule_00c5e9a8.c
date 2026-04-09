// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadModule
// Entry Point: 00c5e9a8
// Size: 292 bytes
// Signature: undefined __cdecl loadModule(char * param_1, uint * param_2)


/* LibraryUtil::loadModule(char const*, unsigned int&) */

bool LibraryUtil::loadModule(char *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = dlopen(param_1,1);
  puVar6 = DAT_0211f548;
  uVar2 = DAT_010482e0;
  if (lVar5 != 0) {
    puVar8 = &DAT_0211f548;
    uVar4 = DAT_010482e0 + 1;
    *param_2 = DAT_010482e0;
    DAT_010482e0 = uVar4;
    puVar7 = puVar8;
    puVar1 = DAT_0211f548;
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = &DAT_0211f548;
LAB_00c5ea04:
      do {
        puVar8 = puVar6;
        if (*(uint *)(puVar8 + 4) <= uVar2) {
          if (*(uint *)(puVar8 + 4) < uVar2) {
            puVar7 = puVar8 + 1;
            puVar6 = (undefined8 *)*puVar7;
            if ((undefined8 *)*puVar7 != (undefined8 *)0x0) goto LAB_00c5ea04;
          }
          puVar1 = (undefined8 *)*puVar7;
          goto joined_r0x00c5ea60;
        }
        puVar6 = (undefined8 *)*puVar8;
        puVar7 = puVar8;
      } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
      puVar1 = (undefined8 *)*puVar8;
    }
joined_r0x00c5ea60:
    if (puVar1 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)operator_new(0x30);
      puVar6[5] = lVar5;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = puVar8;
      *puVar7 = puVar6;
      plVar3 = s_handleMap;
      *(uint *)(puVar6 + 4) = uVar2;
      if ((long *)*plVar3 != (long *)0x0) {
        puVar6 = (undefined8 *)*puVar7;
        s_handleMap = (long *)*plVar3;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                ((__tree_node_base *)DAT_0211f548,(__tree_node_base *)puVar6);
      DAT_0211f550 = DAT_0211f550 + 1;
    }
  }
  return lVar5 != 0;
}


