// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cmpVertex
// Entry Point: 00b7fff8
// Size: 1568 bytes
// Signature: undefined __cdecl cmpVertex(Vertex * param_1, Vertex * param_2)


/* IndexedTriangleSetBuilder::Vertex::cmpVertex(IndexedTriangleSetBuilder::Vertex const&,
   IndexedTriangleSetBuilder::Vertex const&) */

uint IndexedTriangleSetBuilder::Vertex::cmpVertex(Vertex *param_1,Vertex *param_2)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  fVar3 = *(float *)param_1;
  fVar5 = *(float *)param_2;
  if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
    fVar3 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(param_2 + 4);
    if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
      fVar3 = *(float *)(param_1 + 8);
      fVar5 = *(float *)(param_2 + 8);
      if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
        fVar3 = *(float *)(param_1 + 0x2c);
        fVar5 = *(float *)(param_2 + 0x2c);
        if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
          fVar3 = *(float *)(param_1 + 0x30);
          fVar5 = *(float *)(param_2 + 0x30);
          if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
            fVar3 = *(float *)(param_1 + 0x34);
            fVar5 = *(float *)(param_2 + 0x34);
            if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
              fVar3 = *(float *)(param_1 + 0x38);
              fVar5 = *(float *)(param_2 + 0x38);
              if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
                fVar3 = *(float *)(param_1 + 0x3c);
                fVar5 = *(float *)(param_2 + 0x3c);
                if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
                  fVar3 = *(float *)(param_1 + 0x40);
                  fVar5 = *(float *)(param_2 + 0x40);
                  if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
                    fVar3 = *(float *)(param_1 + 0x44);
                    fVar5 = *(float *)(param_2 + 0x44);
                    if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
                      bVar1 = *(float *)(param_1 + 0x54) < *(float *)(param_2 + 0x54);
                      if (*(float *)(param_1 + 0x54) != *(float *)(param_2 + 0x54))
                      goto LAB_00b80248;
                      uVar4 = NEON_fmadd(*(undefined4 *)(param_1 + 0x48),
                                         *(undefined4 *)(param_2 + 0x48),
                                         *(float *)(param_1 + 0x4c) * *(float *)(param_2 + 0x4c));
                      fVar3 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x50),
                                                *(undefined4 *)(param_2 + 0x50),uVar4);
                      if (fVar3 < 0.0) {
                        if (param_2 <= param_1) {
                          return 1;
                        }
                        return 0xffffffff;
                      }
                      fVar3 = *(float *)(param_1 + 0xc);
                      fVar5 = *(float *)(param_2 + 0xc);
                      if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
                        fVar3 = *(float *)(param_1 + 0x10);
                        fVar5 = *(float *)(param_2 + 0x10);
                        if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
                          fVar3 = *(float *)(param_1 + 0x14);
                          fVar5 = *(float *)(param_2 + 0x14);
                          if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
                            fVar3 = *(float *)(param_1 + 0x18);
                            fVar5 = *(float *)(param_2 + 0x18);
                            if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)) {
                              fVar3 = *(float *)(param_1 + 0x1c);
                              fVar5 = *(float *)(param_2 + 0x1c);
                              if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001))
                              {
                                fVar3 = *(float *)(param_1 + 0x20);
                                fVar5 = *(float *)(param_2 + 0x20);
                                if ((ABS(fVar3 - fVar5) <= 0.0001) && (ABS(fVar5 - fVar3) <= 0.0001)
                                   ) {
                                  fVar3 = *(float *)(param_1 + 0x24);
                                  fVar5 = *(float *)(param_2 + 0x24);
                                  if ((ABS(fVar3 - fVar5) <= 0.0001) &&
                                     (ABS(fVar5 - fVar3) <= 0.0001)) {
                                    fVar3 = *(float *)(param_1 + 0x28);
                                    fVar5 = *(float *)(param_2 + 0x28);
                                    if ((ABS(fVar3 - fVar5) <= 0.0001) &&
                                       (ABS(fVar5 - fVar3) <= 0.0001)) {
                                      fVar3 = *(float *)(param_1 + 0x58);
                                      fVar5 = *(float *)(param_2 + 0x58);
                                      if ((ABS(fVar3 - fVar5) <= 0.0001) &&
                                         (ABS(fVar5 - fVar3) <= 0.0001)) {
                                        fVar3 = *(float *)(param_1 + 0x5c);
                                        fVar5 = *(float *)(param_2 + 0x5c);
                                        if ((ABS(fVar3 - fVar5) <= 0.0001) &&
                                           (ABS(fVar5 - fVar3) <= 0.0001)) {
                                          fVar3 = *(float *)(param_1 + 0x60);
                                          fVar5 = *(float *)(param_2 + 0x60);
                                          if ((ABS(fVar3 - fVar5) <= 0.0001) &&
                                             (ABS(fVar5 - fVar3) <= 0.0001)) {
                                            fVar3 = *(float *)(param_1 + 100);
                                            fVar5 = *(float *)(param_2 + 100);
                                            if ((ABS(fVar3 - fVar5) <= 0.0001) &&
                                               (ABS(fVar5 - fVar3) <= 0.0001)) {
                                              uVar2 = cmp<unsigned_char_const>
                                                                ((uchar *)(param_1 + 0x68),
                                                                 (uchar *)(param_2 + 0x68),4,'\0');
                                              if (uVar2 != 0) {
                                                return uVar2;
                                              }
                                              if (*(float *)(param_1 + 0x6c) <
                                                  *(float *)(param_2 + 0x6c) + -0.0001) {
                                                return 0xffffffff;
                                              }
                                              return (uint)(*(float *)(param_2 + 0x6c) + 0.0001 <
                                                           *(float *)(param_1 + 0x6c));
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar1 = fVar3 < fVar5;
LAB_00b80248:
  uVar2 = 0xffffffff;
  if (!bVar1) {
    uVar2 = 1;
  }
  return uVar2;
}


