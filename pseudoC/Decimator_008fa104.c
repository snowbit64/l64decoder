// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decimator
// Entry Point: 008fa104
// Size: 252 bytes
// Signature: undefined __thiscall Decimator(Decimator * this, ushort * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, float param_7, float param_8, float param_9, bool param_10)


/* Decimator::Decimator(unsigned short const*, int, int, int, int, int, float, float, float, bool)
    */

void __thiscall
Decimator::Decimator
          (Decimator *this,ushort *param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6,float param_7,float param_8,float param_9,bool param_10)

{
  ulong uVar1;
  int iVar2;
  HeightMap *this_00;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  
  this_00 = (HeightMap *)operator_new(0x20);
                    /* try { // try from 008fa160 to 008fa17b has its CatchHandler @ 008fa200 */
  HeightMap::HeightMap(this_00,param_1,param_2,param_3,param_7,param_8,param_9);
  *(HeightMap **)this = this_00;
  iVar2 = param_5 * param_4 * param_6;
  uVar6 = (ulong)iVar2;
  uVar1 = uVar6 << 5 | 8;
  if (uVar6 >> 0x3b != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  puVar3 = (ulong *)operator_new__(uVar1);
  *puVar3 = uVar6;
  if (iVar2 != 0) {
    lVar4 = uVar6 << 5;
    puVar5 = puVar3 + 1;
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar4 = lVar4 + -0x20;
      puVar5[2] = 0;
      puVar5 = puVar5 + 4;
    } while (lVar4 != 0);
  }
  *(ulong **)(this + 8) = puVar3 + 1;
  *(int *)(this + 0x10) = param_4;
  *(int *)(this + 0x14) = param_5;
  *(int *)(this + 0x18) = param_6;
  *(float *)(this + 0x1c) = param_7;
  this[0x20] = (Decimator)param_10;
  return;
}


