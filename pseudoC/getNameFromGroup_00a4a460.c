// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNameFromGroup
// Entry Point: 00a4a460
// Size: 292 bytes
// Signature: undefined __cdecl getNameFromGroup(uint param_1)


/* AudioSource::getNameFromGroup(unsigned int) */

char * AudioSource::getNameFromGroup(uint param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (DAT_02112cc0 != (undefined8 *)0x0) {
    puVar3 = &DAT_02112cc0;
    puVar4 = DAT_02112cc0;
    do {
      if (*(uint *)(puVar4 + 4) >= param_1) {
        puVar3 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[*(uint *)(puVar4 + 4) < param_1];
    } while (puVar4 != (undefined8 *)0x0);
    if (((undefined8 **)puVar3 != &DAT_02112cc0) && (*(uint *)(puVar3 + 4) <= param_1)) {
      puVar3 = &DAT_02112cc0;
      puVar4 = DAT_02112cc0;
      do {
        puVar2 = puVar4;
        if (param_1 < *(uint *)(puVar2 + 4)) {
          puVar4 = (undefined8 *)*puVar2;
          puVar3 = puVar2;
        }
        else {
          if (param_1 <= *(uint *)(puVar2 + 4)) break;
          puVar3 = puVar2 + 1;
          puVar4 = (undefined8 *)*puVar3;
        }
      } while (puVar4 != (undefined8 *)0x0);
      puVar4 = (undefined8 *)*puVar3;
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)operator_new(0x40);
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[5] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = puVar2;
        *puVar3 = puVar4;
        plVar1 = s_groups;
        *(uint *)(puVar4 + 4) = param_1;
        puVar2 = puVar4;
        if ((long *)*plVar1 != (long *)0x0) {
          puVar2 = (undefined8 *)*puVar3;
          s_groups = (long *)*plVar1;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)DAT_02112cc0,(__tree_node_base *)puVar2);
        DAT_02112cc8 = DAT_02112cc8 + 1;
      }
      if ((*(byte *)(puVar4 + 5) & 1) == 0) {
        return (char *)((long)puVar4 + 0x29);
      }
      return (char *)puVar4[7];
    }
  }
  return "UNKNOWN";
}


