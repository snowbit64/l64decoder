// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLightActorTransformation
// Entry Point: 0099b8e4
// Size: 200 bytes
// Signature: undefined __thiscall getLightActorTransformation(Bt2ScenegraphPhysicsContext * this, uint param_1, float * param_2)


/* Bt2ScenegraphPhysicsContext::getLightActorTransformation(unsigned int, float*) */

undefined8 __thiscall
Bt2ScenegraphPhysicsContext::getLightActorTransformation
          (Bt2ScenegraphPhysicsContext *this,uint param_1,float *param_2)

{
  Bt2ScenegraphPhysicsContext *pBVar1;
  long lVar2;
  Bt2ScenegraphPhysicsContext *pBVar3;
  float fVar4;
  
  pBVar3 = *(Bt2ScenegraphPhysicsContext **)(this + 0x268);
  if (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0) {
    pBVar1 = this + 0x268;
    do {
      if (*(uint *)(pBVar3 + 0x20) >= param_1) {
        pBVar1 = pBVar3;
      }
      pBVar3 = *(Bt2ScenegraphPhysicsContext **)
                (pBVar3 + (ulong)(*(uint *)(pBVar3 + 0x20) < param_1) * 8);
    } while (pBVar3 != (Bt2ScenegraphPhysicsContext *)0x0);
    if (((pBVar1 != this + 0x268) && (*(uint *)(pBVar1 + 0x20) <= param_1)) &&
       (lVar2 = *(long *)(pBVar1 + 0x50), lVar2 != 0)) {
      *param_2 = *(float *)(lVar2 + 8);
      param_2[1] = *(float *)(lVar2 + 0x18);
      fVar4 = *(float *)(lVar2 + 0x28);
      param_2[3] = 0.0;
      param_2[2] = fVar4;
      param_2[4] = *(float *)(lVar2 + 0xc);
      param_2[5] = *(float *)(lVar2 + 0x1c);
      fVar4 = *(float *)(lVar2 + 0x2c);
      param_2[7] = 0.0;
      param_2[6] = fVar4;
      param_2[8] = *(float *)(lVar2 + 0x10);
      param_2[9] = *(float *)(lVar2 + 0x20);
      fVar4 = *(float *)(lVar2 + 0x30);
      param_2[0xb] = 0.0;
      param_2[10] = fVar4;
      param_2[0xc] = *(float *)(lVar2 + 0x38);
      param_2[0xd] = *(float *)(lVar2 + 0x3c);
      fVar4 = *(float *)(lVar2 + 0x40);
      param_2[0xf] = 1.0;
      param_2[0xe] = fVar4;
      return 1;
    }
  }
  return 0;
}


