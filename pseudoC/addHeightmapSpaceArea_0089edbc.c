// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addHeightmapSpaceArea
// Entry Point: 0089edbc
// Size: 292 bytes
// Signature: undefined __cdecl addHeightmapSpaceArea(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, TerrainBrush * param_10, bool param_11)


/* TerrainDeformation::addHeightmapSpaceArea(float, float, float, float, float, float, float, float,
   float, TerrainBrush*, bool) */

void TerrainDeformation::addHeightmapSpaceArea
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,TerrainBrush *param_10,bool param_11)

{
  long lVar1;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  ulong local_98;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  Plane::Plane((Plane *)&local_ac);
  local_100 = param_1 + param_4;
  fStack_fc = param_2 + param_5;
  local_f8 = param_3 + param_6;
  local_110 = param_1 + param_7;
  fStack_10c = param_2 + param_8;
  local_108 = param_3 + param_9;
  local_b0 = param_9;
  local_f0 = param_1;
  fStack_ec = param_2;
  local_e8 = param_3;
  local_d0 = param_1;
  fStack_cc = param_2;
  local_c8 = param_3;
  fStack_c4 = param_4;
  local_c0 = param_5;
  fStack_bc = param_6;
  local_b8 = param_7;
  fStack_b4 = param_8;
  Plane::Plane((Plane *)&local_e0,(Vector3 *)&local_f0,(Vector3 *)&local_100,(Vector3 *)&local_110);
  uStack_a4 = uStack_d8;
  local_ac = local_e0;
  local_98 = (ulong)param_11;
  FUN_0089f180(param_10 + 0x60,&local_d0);
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


