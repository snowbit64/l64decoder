// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTrackPoint
// Entry Point: 008e2da8
// Size: 784 bytes
// Signature: undefined __cdecl addTrackPoint(Track * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, bool param_14)


/* TyreTrackGeometry::addTrackPoint(TyreTrackGeometry::Track*, float, float, float, float, float,
   float, float, float, float, float, float, float, bool) */

void TyreTrackGeometry::addTrackPoint
               (Track *param_1,float param_2,float param_3,float param_4,float param_5,float param_6
               ,float param_7,float param_8,float param_9,float param_10,float param_11,
               float param_12,float param_13,bool param_14)

{
  Vertex *pVVar1;
  Track TVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  pfVar6 = (float *)(ulong)param_14;
  fVar7 = (float)-(uint)(param_13 < -0.0001);
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (0.0001 < param_13) {
    fVar7 = 1.401298e-45;
  }
  if (fVar7 == 0.0) {
    pfVar6[0x23] = 0.0;
  }
  else {
    if (fVar7 == pfVar6[0x23]) {
      bVar4 = *(Track *)(pfVar6 + 2) == (Track)0x0;
    }
    else {
      if (pfVar6[0x21] != -NAN) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)(uint)pfVar6[0x21] * 8) = 0;
        pfVar6[0x21] = -NAN;
      }
      if (pfVar6[0x22] != -NAN) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)(uint)pfVar6[0x22] * 8) = 0;
        pfVar6[0x22] = -NAN;
      }
      bVar4 = true;
      *(Track *)(pfVar6 + 2) = (Track)0x0;
    }
    pfVar6[0x23] = fVar7;
    fVar10 = (float)NEON_fmadd(param_5,0x3cf5c28f,param_2);
    fVar9 = (float)NEON_fmadd(param_6,0x3cf5c28f,param_3);
    fVar8 = (float)NEON_fmadd(param_7,0x3cf5c28f,param_4);
    if (bVar4) {
      pfVar6[4] = fVar10;
      pfVar6[5] = fVar9;
      pfVar6[6] = fVar8;
      pfVar6[7] = param_5;
      pfVar6[8] = param_6;
      pfVar6[9] = param_7;
      pfVar6[10] = param_8;
      pfVar6[0xb] = param_9;
      pfVar6[0xc] = param_10;
      pfVar6[0xd] = param_11;
      pfVar6[0xe] = param_12;
      *(Track *)(pfVar6 + 0xf) = (Track)0x0;
      pfVar6[0x10] = fVar10;
      pfVar6[0x11] = fVar9;
      pfVar6[0x12] = fVar8;
      pfVar6[0x13] = param_5;
      pfVar6[0x14] = param_6;
      pfVar6[0x15] = param_7;
      pfVar6[0x16] = param_8;
      pfVar6[0x17] = param_9;
      pfVar6[0x18] = param_10;
      pfVar6[0x19] = param_11;
      pfVar6[0x1a] = param_12;
      *(undefined2 *)(pfVar6 + 0x1b) = 0;
      *(Track *)(pfVar6 + 3) = (Track)0x1;
      pfVar6[0x1f] = 0.0;
      pfVar6[0x20] = 0.0;
      *(Track *)(pfVar6 + 2) = (Track)0x1;
    }
    else {
      pfVar6[0x12] = fVar8;
      pfVar6[0x13] = param_5;
      pfVar6[0x10] = fVar10;
      pfVar6[0x11] = fVar9;
      fVar9 = fVar9 - pfVar6[5];
      pfVar6[0x14] = param_6;
      pfVar6[0x15] = param_7;
      pfVar6[0x16] = param_8;
      pfVar6[0x17] = param_9;
      fVar10 = fVar10 - pfVar6[4];
      pfVar6[0x18] = param_10;
      pfVar6[0x19] = param_11;
      pfVar6[0x1a] = param_12;
      fVar8 = fVar8 - pfVar6[6];
      *(Track *)(pfVar6 + 0x1b) = (Track)0x0;
      uVar11 = NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
      fVar12 = (float)NEON_fmadd(fVar8,fVar8,uVar11);
      fVar12 = SQRT(fVar12);
      if (0.1 < fVar12) {
        fVar5 = pfVar6[0x22];
        local_50 = 1.0 / fVar12;
        local_58 = fVar10 * local_50;
        fStack_54 = fVar9 * local_50;
        local_50 = fVar8 * local_50;
        if (fVar5 == -NAN) {
          fVar5 = (float)Ring::allocateNewSegment
                                   ((Ring *)(param_1 + 0x70),(Track *)pfVar6,
                                    *(MultiresTexture **)(param_1 + 0xa8));
          pfVar6[0x22] = fVar5;
        }
        pVVar1 = (Vertex *)0x0;
        if (pfVar6[0x21] != -NAN) {
          pVVar1 = (Vertex *)
                   (*(long *)(param_1 + 0x98) + (ulong)(uint)((int)pfVar6[0x21] << 2) * 0x24);
        }
        writeSegment((TyreTrackGeometry *)param_1,
                     (Vertex *)(*(long *)(param_1 + 0x98) + (ulong)(uint)((int)fVar5 << 2) * 0x24),
                     pVVar1,(TrackSegment *)(pfVar6 + 3),*pfVar6,(int)pfVar6[0x24],
                     (Vector3 *)&local_58,fVar12,(int)fVar7);
        param_1[0x70] = (Track)0x1;
        if (pfVar6[1] <= fVar12) {
          *(Track *)(pfVar6 + 3) = (Track)0x0;
          TVar2 = *(Track *)(pfVar6 + 0xf);
          *(Track *)(pfVar6 + 0xf) = *(Track *)(pfVar6 + 0x1b);
          pfVar6[6] = pfVar6[0x12];
          *(bool *)((long)pfVar6 + 0x6d) =
               TVar2 != (Track)0x0 && *(Track *)(pfVar6 + 0x1b) != (Track)0x0;
          *(undefined8 *)(pfVar6 + 4) = *(undefined8 *)(pfVar6 + 0x10);
          pfVar6[0x1e] = local_50;
          *(undefined8 *)(pfVar6 + 7) = *(undefined8 *)(pfVar6 + 0x13);
          pfVar6[9] = pfVar6[0x15];
          fVar7 = fVar12 / *pfVar6 + pfVar6[0x1f];
          pfVar6[0xc] = pfVar6[0x18];
          *(undefined8 *)(pfVar6 + 10) = *(undefined8 *)(pfVar6 + 0x16);
          *(undefined8 *)(pfVar6 + 0xd) = *(undefined8 *)(pfVar6 + 0x19);
          *(ulong *)(pfVar6 + 0x1c) = CONCAT44(fStack_54,local_58);
          pfVar6[0x20] = fVar7;
          pfVar6[0x1f] = fVar7 - (float)(int)fVar7;
          if (pfVar6[0x21] != -NAN) {
            *(undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)(uint)pfVar6[0x21] * 8) = 0;
          }
          pfVar6[0x21] = pfVar6[0x22];
          pfVar6[0x22] = -NAN;
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


