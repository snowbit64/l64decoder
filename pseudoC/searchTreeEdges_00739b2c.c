// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: searchTreeEdges
// Entry Point: 00739b2c
// Size: 440 bytes
// Signature: undefined __cdecl searchTreeEdges(uint param_1, Vector2 param_2, float param_3)


/* VehicleNavigationAgent::searchTreeEdges(unsigned int, Vector2, float) const */

void VehicleNavigationAgent::searchTreeEdges
               (undefined8 *param_1,float param_2,float param_3,float param_4,Vector2 *param_5,
               uchar param_6)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  vector *pvVar4;
  ushort uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined auStack_bc [4];
  ushort local_b8 [2];
  FixedPoint16 local_b4 [4];
  bool abStack_b0 [40];
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  sVar2 = *(short *)(param_5 + 0x30);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (sVar2 != 0) {
    uVar5 = 1;
    uVar1 = 0;
    fVar8 = param_3;
    do {
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
                    /* try { // try from 00739be8 to 00739bf3 has its CatchHandler @ 00739ce4 */
          fVar7 = (float)VehicleNavigationGridAdapter::getNodePos
                                   (*(VehicleNavigationGridAdapter **)(param_5 + 0x12a0),uVar5,uVar1
                                   );
          fVar8 = param_3 - fVar8;
          fVar7 = (float)NEON_fmadd(fVar8,fVar8,(param_2 - fVar7) * (param_2 - fVar7));
          if (fVar7 <= param_4 * param_4) {
            lVar6 = 8;
            do {
                    /* try { // try from 00739c38 to 00739c53 has its CatchHandler @ 00739cec */
              pvVar4 = (vector *)getCurve(param_5,abStack_b0,local_b4,local_b8,(NodeId)auStack_bc);
              if ((uint)pvVar4 - 1 < 0xfffffffe) {
                    /* try { // try from 00739c7c to 00739c8f has its CatchHandler @ 00739ce8 */
                tessellateCurve(pvVar4,(Vector2 *)param_1,(uint)abStack_b0,(uint)pvVar4,param_6);
                *(byte *)(param_1[1] + -4) = *(byte *)(param_1[1] + -4) | 4;
              }
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          uVar5 = uVar5 + 1;
        } while (*(ushort *)(param_5 + 0x30) != uVar5);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != uVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


