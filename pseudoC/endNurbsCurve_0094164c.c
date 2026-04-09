// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endNurbsCurve
// Entry Point: 0094164c
// Size: 440 bytes
// Signature: undefined __cdecl endNurbsCurve(void * param_1, char * param_2)


/* I3DShapePoolFactory::endNurbsCurve(void*, char const*) */

void I3DShapePoolFactory::endNurbsCurve(void *param_1,char *param_2)

{
  float *pfVar1;
  uint uVar2;
  CubicSpline *this;
  SplineGeometry *this_00;
  StreamManager *this_01;
  byte *pbVar3;
  long *plVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  long **pplVar8;
  long **pplVar9;
  long **pplVar10;
  
  lVar7 = *(long *)((long)param_1 + 0x270);
  pfVar1 = *(float **)(lVar7 + 0x28);
  if ((1 < (ulong)((*(long *)(lVar7 + 0x30) - (long)pfVar1 >> 2) * -0x5555555555555555)) &&
     (*(int *)(lVar7 + 0x1c) != 0)) {
    if (*(int *)(lVar7 + 0x18) == 1) {
      this = (CubicSpline *)operator_new(0x40);
                    /* try { // try from 009416ac to 009416af has its CatchHandler @ 00941808 */
      CubicSpline::CubicSpline(this,*(FORM *)(lVar7 + 0x40));
    }
    else {
      this = (CubicSpline *)operator_new(0x38);
                    /* try { // try from 009416c4 to 009416c7 has its CatchHandler @ 00941804 */
      LinearSpline::LinearSpline((LinearSpline *)this,*(FORM *)(lVar7 + 0x40));
    }
    Spline::setCVs((Spline *)this,
                   (int)((ulong)(*(long *)(*(long *)((long)param_1 + 0x270) + 0x30) -
                                *(long *)(*(long *)((long)param_1 + 0x270) + 0x28)) >> 2) *
                   -0x55555555,pfVar1);
    this_00 = (SplineGeometry *)operator_new(0xe0);
    pbVar3 = *(byte **)((long)param_1 + 0x270);
    pbVar6 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar6 = pbVar3 + 1;
    }
                    /* try { // try from 00941714 to 0094171b has its CatchHandler @ 0094180c */
    SplineGeometry::SplineGeometry(this_00,(char *)pbVar6,(Spline *)this);
    this_01 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable
              (this_01,(Streamable *)(this_00 + 200),*(STREAM_QUEUE *)((long)param_1 + 0x254));
    FUN_00f276d0(1,this_00 + 8);
    pplVar8 = (long **)((long)param_1 + 0xc0);
    uVar2 = *(uint *)(*(long *)((long)param_1 + 0x270) + 0x1c);
    pplVar9 = (long **)*pplVar8;
    pplVar10 = pplVar8;
    while (pplVar9 != (long **)0x0) {
      while (pplVar10 = pplVar9, uVar2 < *(uint *)(pplVar10 + 4)) {
        pplVar8 = pplVar10;
        pplVar9 = (long **)*pplVar10;
        if ((long **)*pplVar10 == (long **)0x0) {
          plVar5 = *pplVar10;
          goto joined_r0x00941790;
        }
      }
      if (uVar2 <= *(uint *)(pplVar10 + 4)) break;
      pplVar8 = pplVar10 + 1;
      pplVar9 = (long **)*pplVar8;
    }
    plVar5 = *pplVar8;
joined_r0x00941790:
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)operator_new(0x30);
      plVar5[5] = (long)this_00;
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = (long)pplVar10;
      *pplVar8 = plVar5;
      plVar4 = *(long **)((long)param_1 + 0xb8);
      *(uint *)(plVar5 + 4) = uVar2;
      if (*plVar4 != 0) {
        *(long *)((long)param_1 + 0xb8) = *plVar4;
        plVar5 = *pplVar8;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)((long)param_1 + 0xc0),(__tree_node_base *)plVar5);
      *(long *)((long)param_1 + 200) = *(long *)((long)param_1 + 200) + 1;
    }
  }
  return;
}


