// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tesselate
// Entry Point: 00ec3924
// Size: 388 bytes
// Signature: undefined __thiscall tesselate(Myfm_Tesselate * this, fm_VertexIndex * param_1, uint param_2, uint * param_3, float param_4, uint param_5, uint * param_6)


/* FLOAT_MATH::Myfm_Tesselate::tesselate(FLOAT_MATH::fm_VertexIndex*, unsigned int, unsigned int
   const*, float, unsigned int, unsigned int&) */

void __thiscall
FLOAT_MATH::Myfm_Tesselate::tesselate
          (Myfm_Tesselate *this,fm_VertexIndex *param_1,uint param_2,uint *param_3,float param_4,
          uint param_5,uint *param_6)

{
  ulong uVar1;
  ulong uVar2;
  void *__dest;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  
  lVar4 = *(long *)param_1;
  *(uint *)(this + 0x38) = param_5;
  *(fm_VertexIndex **)(this + 0x18) = param_1;
  *(float *)(this + 8) = param_4 * param_4;
  *(double *)(this + 0x10) = (double)(param_4 * param_4);
  uVar1 = (**(code **)(lVar4 + 0x38))(param_1);
  uVar2 = (**(code **)(**(long **)(this + 0x18) + 0x30))();
  if ((uVar1 & 1) == 0) {
    sVar5 = (uVar2 & 0xffffffff) * 0xc;
    __dest = malloc(sVar5);
    pvVar3 = (void *)(**(code **)(**(long **)(this + 0x18) + 0x10))();
    memcpy(__dest,pvVar3,sVar5);
    if (param_2 != 0) {
      do {
        tesselate(this,(float *)((long)__dest + (ulong)(*param_3 * 3) * 4),
                  (float *)((long)__dest + (ulong)(param_3[1] * 3) * 4),
                  (float *)((long)__dest + (ulong)(param_3[2] * 3) * 4),0);
        param_2 = param_2 - 1;
        param_3 = param_3 + 3;
      } while (param_2 != 0);
    }
  }
  else {
    sVar5 = (uVar2 & 0xffffffff) * 0x18;
    __dest = malloc(sVar5);
    pvVar3 = (void *)(**(code **)(**(long **)(this + 0x18) + 0x18))();
    memcpy(__dest,pvVar3,sVar5);
    if (param_2 != 0) {
      do {
        tesselate(this,(double *)((long)__dest + (ulong)(*param_3 * 3) * 8),
                  (double *)((long)__dest + (ulong)(param_3[1] * 3) * 8),
                  (double *)((long)__dest + (ulong)(param_3[2] * 3) * 8),0);
        param_2 = param_2 - 1;
        param_3 = param_3 + 3;
      } while (param_2 != 0);
    }
  }
  free(__dest);
  *param_6 = (uint)((ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 2) / 3);
  return;
}


