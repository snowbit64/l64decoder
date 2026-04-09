// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<FoliageSystemDesc::Shape*>
// Entry Point: 00a6746c
// Size: 632 bytes
// Signature: type __thiscall assign<FoliageSystemDesc::Shape*>(vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> * this, Shape * param_1, Shape * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<FoliageSystemDesc::Shape*>::value&&is_constructible<FoliageSystemDesc::Shape,
   std::__ndk1::iterator_traits<FoliageSystemDesc::Shape*>::reference>::value, void>::type
   std::__ndk1::vector<FoliageSystemDesc::Shape, std::__ndk1::allocator<FoliageSystemDesc::Shape>
   >::assign<FoliageSystemDesc::Shape*>(FoliageSystemDesc::Shape*, FoliageSystemDesc::Shape*) */

type __thiscall
std::__ndk1::vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>::
assign<FoliageSystemDesc::Shape*>
          (vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> *this,
          Shape *param_1,Shape *param_2)

{
  type tVar1;
  type tVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  void *pvVar6;
  vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> *pvVar7;
  undefined4 *puVar8;
  vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> *pvVar9;
  undefined4 *puVar10;
  ulong uVar11;
  vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> *pvVar12;
  void *pvVar13;
  void *pvVar14;
  
  uVar5 = *(ulong *)(this + 0x10);
  puVar10 = *(undefined4 **)this;
  uVar11 = (long)param_2 - (long)param_1 >> 5;
  if (uVar11 <= (ulong)((long)(uVar5 - (long)puVar10) >> 5)) {
    uVar5 = *(long *)(this + 8) - (long)puVar10 >> 5;
    puVar3 = (undefined4 *)(param_1 + (*(long *)(this + 8) - (long)puVar10));
    puVar4 = puVar3;
    if (uVar11 <= uVar5) {
      puVar4 = (undefined4 *)param_2;
    }
    pvVar12 = this;
    if (puVar4 != (undefined4 *)param_1) {
      do {
        *puVar10 = *(undefined4 *)param_1;
        if ((undefined4 *)param_1 != puVar10) {
          tVar2 = vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::
                  assign<FoliageSystemDesc::Lod*>
                            ((vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>
                              *)(puVar10 + 2),*(Lod **)((long)param_1 + 8),
                             *(Lod **)((long)param_1 + 0x10));
          pvVar12 = (vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                     *)(ulong)tVar2;
        }
        param_1 = (Shape *)((long)param_1 + 0x20);
        puVar10 = puVar10 + 8;
      } while ((undefined4 *)param_1 != puVar4);
    }
    tVar1 = (type)pvVar12;
    puVar8 = *(undefined4 **)(this + 8);
    if (uVar5 < uVar11) {
      if (puVar4 != (undefined4 *)param_2) {
        do {
          puVar10 = puVar8;
          *puVar10 = *puVar3;
                    /* try { // try from 00a67564 to 00a6756f has its CatchHandler @ 00a676e4 */
          tVar1 = vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::
                  vector((vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>
                          *)(puVar10 + 2),(vector *)(puVar3 + 2));
          puVar3 = puVar3 + 8;
          puVar8 = puVar10 + 8;
        } while (puVar3 != (undefined4 *)param_2);
        puVar8 = puVar10 + 8;
      }
      *(undefined4 **)(this + 8) = puVar8;
    }
    else {
      while (puVar8 != puVar10) {
        pvVar9 = *(vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                   **)(puVar8 + -6);
        if (pvVar9 != (vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                       *)0x0) {
          pvVar12 = pvVar9;
          pvVar7 = *(vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                     **)(puVar8 + -4);
          if (*(vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> **
               )(puVar8 + -4) != pvVar9) {
            do {
              pvVar12 = pvVar7 + -0x40;
              if (((byte)pvVar7[-0x38] & 1) != 0) {
                operator_delete(*(void **)(pvVar7 + -0x28));
              }
              pvVar7 = pvVar12;
            } while (pvVar12 != pvVar9);
            pvVar12 = *(vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>>
                        **)(puVar8 + -6);
          }
          *(vector<FoliageSystemDesc::Shape,std::__ndk1::allocator<FoliageSystemDesc::Shape>> **)
           (puVar8 + -4) = pvVar9;
          operator_delete(pvVar12);
        }
        tVar1 = (type)pvVar12;
        puVar8 = puVar8 + -8;
      }
      *(undefined4 **)(this + 8) = puVar10;
    }
    return tVar1;
  }
  if (puVar10 != (undefined4 *)0x0) {
    puVar3 = puVar10;
    puVar4 = *(undefined4 **)(this + 8);
    if (*(undefined4 **)(this + 8) != puVar10) {
      do {
        pvVar13 = *(void **)(puVar4 + -6);
        puVar3 = puVar4 + -8;
        if (pvVar13 != (void *)0x0) {
          pvVar14 = pvVar13;
          pvVar6 = *(void **)(puVar4 + -4);
          if (*(void **)(puVar4 + -4) != pvVar13) {
            do {
              pvVar14 = (void *)((long)pvVar6 + -0x40);
              if ((*(byte *)((long)pvVar6 + -0x38) & 1) != 0) {
                operator_delete(*(void **)((long)pvVar6 + -0x28));
              }
              pvVar6 = pvVar14;
            } while (pvVar14 != pvVar13);
            pvVar14 = *(void **)(puVar4 + -6);
          }
          *(void **)(puVar4 + -4) = pvVar13;
          operator_delete(pvVar14);
        }
        puVar4 = puVar3;
      } while (puVar3 != puVar10);
      puVar3 = *(undefined4 **)this;
    }
    *(undefined4 **)(this + 8) = puVar10;
    operator_delete(puVar3);
    uVar5 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (-1 < (long)param_2 - (long)param_1) {
    if (uVar11 <= (ulong)((long)uVar5 >> 4)) {
      uVar11 = (long)uVar5 >> 4;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar11 = 0x7ffffffffffffff;
    }
    if (uVar11 >> 0x3b == 0) {
      puVar4 = (undefined4 *)operator_new(uVar11 * 0x20);
      *(undefined4 **)this = puVar4;
      *(undefined4 **)(this + 8) = puVar4;
      *(undefined4 **)(this + 0x10) = puVar4 + uVar11 * 8;
      puVar10 = puVar4;
      puVar3 = puVar4;
      if (param_1 != param_2) {
        do {
          puVar10 = puVar3;
          *puVar10 = *(undefined4 *)param_1;
                    /* try { // try from 00a6769c to 00a676a7 has its CatchHandler @ 00a676ec */
          puVar4 = (undefined4 *)
                   vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>::
                   vector((vector<FoliageSystemDesc::Lod,std::__ndk1::allocator<FoliageSystemDesc::Lod>>
                           *)(puVar10 + 2),(vector *)((long)param_1 + 8));
          param_1 = (Shape *)((long)param_1 + 0x20);
          puVar3 = puVar10 + 8;
        } while (param_1 != param_2);
        puVar10 = puVar10 + 8;
      }
      *(undefined4 **)(this + 8) = puVar10;
      return (type)puVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


