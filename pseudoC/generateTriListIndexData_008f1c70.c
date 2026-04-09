// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateTriListIndexData
// Entry Point: 008f1c70
// Size: 212 bytes
// Signature: undefined __cdecl generateTriListIndexData(IndexData * param_1, uint param_2, uint param_3, IRenderDevice * param_4)


/* GeoMipMappingTerrainPatch::generateTriListIndexData(GeoMipMappingTerrainPatch::IndexData*,
   unsigned int, unsigned int, IRenderDevice*) */

void GeoMipMappingTerrainPatch::generateTriListIndexData
               (IndexData *param_1,uint param_2,uint param_3,IRenderDevice *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ushort *local_70;
  int local_68;
  undefined8 local_64;
  char *local_58;
  ushort *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = generateTriListIndex(param_2,param_3,&local_50);
  local_68 = iVar2 << 1;
  local_70 = local_50;
  local_64 = 1;
  local_58 = "GeoMipMappingTerrainPatch";
  uVar3 = (**(code **)(*(long *)param_4 + 0x138))(param_4);
  uVar3 = (**(code **)(*(long *)param_4 + 0x110))(param_4,uVar3,&local_70);
  *(int *)param_1 = iVar2;
  *(undefined8 *)(param_1 + 8) = uVar3;
  if (local_50 != (ushort *)0x0) {
    operator_delete__(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


