// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readNetworkStream
// Entry Point: 00710820
// Size: 880 bytes
// Signature: undefined __thiscall readNetworkStream(AnimalSoundSystem * this, GsBitStream * param_1)


/* AnimalSoundSystem::readNetworkStream(GsBitStream*) */

void __thiscall AnimalSoundSystem::readNetworkStream(AnimalSoundSystem *this,GsBitStream *param_1)

{
  bool bVar1;
  long *plVar2;
  size_t __n;
  long lVar3;
  void *__s;
  uchar *puVar4;
  void *__src;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  void *__dest;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ushort local_94 [2];
  ushort local_90 [2];
  byte local_8c [4];
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  GsBitStream::readBits(param_1,local_8c,8,true);
  if ((ulong)local_8c[0] == 0) {
    __s = (void *)0x0;
    lVar6 = *(long *)(this + 0x30);
    uVar9 = 0;
  }
  else {
    uVar9 = (ulong)local_8c[0] * 0x1c;
    __s = operator_new(uVar9);
    memset(__s,0,(ulong)(((int)uVar9 - 0x1cU >> 2 & 0x3fff) / 7) * 0x1c + 0x1c);
    lVar10 = 0;
    uVar11 = 0;
    plVar2 = (long *)(this + 0x30);
    do {
                    /* try { // try from 007108bc to 00710953 has its CatchHandler @ 00710ba4 */
      GsBitStream::readBits(param_1,(uchar *)local_90,0x10,true);
      GsBitStream::readBits(param_1,(uchar *)local_94,0x10,true);
      puVar4 = (uchar *)(*plVar2 + lVar10 + 0x18);
      *puVar4 = '\0';
      GsBitStream::readBits(param_1,puVar4,1,true);
      GsBitStream::readBits(param_1,(uchar *)(*plVar2 + lVar10 + 8),0x20,true);
      GsBitStream::readBits(param_1,(uchar *)(*plVar2 + lVar10 + 0xc),0x20,true);
      GsBitStream::readBits(param_1,(uchar *)(*plVar2 + lVar10 + 0x10),0x20,true);
      lVar6 = *plVar2;
      uVar11 = uVar11 + 1;
      puVar12 = (uint *)(lVar6 + lVar10);
      lVar10 = lVar10 + 0x1c;
      *puVar12 = (uint)local_90[0];
      puVar12[1] = (uint)local_94[0];
      uVar9 = (ulong)local_8c[0];
    } while (uVar11 < uVar9);
  }
  iVar5 = (int)(*(long *)(this + 0x38) - lVar6 >> 2) * -0x49249249;
  if (0 < iVar5) {
    lVar6 = (long)iVar5;
    do {
      lVar10 = lVar6 + -1;
      if ((int)uVar9 != 0) {
        piVar8 = (int *)((long)__s + 4);
        do {
          if ((*(int *)(*(long *)(this + 0x30) + lVar10 * 0x1c) == piVar8[-1]) &&
             (*(int *)(*(long *)(this + 0x30) + lVar10 * 0x1c + 4) == *piVar8)) goto LAB_007109cc;
          piVar8 = piVar8 + 7;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
                    /* try { // try from 00710a3c to 00710a5f has its CatchHandler @ 00710b98 */
      AudioSource::stop();
      ScenegraphNode::setVisibility
                (*(ScenegraphNode **)
                  (*(long *)this + (ulong)*(uint *)(*(long *)(this + 0x30) + lVar10 * 0x1c + 4) * 8)
                 ,false);
      __src = (void *)(*(long *)(this + 0x30) + lVar6 * 0x1c);
      __dest = (void *)(*(long *)(this + 0x30) + lVar10 * 0x1c);
      __n = *(long *)(this + 0x38) - (long)__src;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *(size_t *)(this + 0x38) = (long)__dest + __n;
LAB_007109cc:
      uVar9 = (ulong)local_8c[0];
      bVar1 = 1 < lVar6;
      lVar6 = lVar10;
    } while (bVar1);
  }
  if ((int)uVar9 != 0) {
    uVar11 = 0;
    do {
      lVar6 = *(long *)(this + 0x18);
      if (*(long *)(this + 0x20) - lVar6 != 0) {
        puVar12 = (uint *)((long)__s + uVar11 * 0x1c);
        uVar13 = 0;
        uVar7 = (*(long *)(this + 0x20) - lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3;
        do {
          if (*(uint *)(lVar6 + uVar13 * 0x58) == *puVar12) {
            lVar10 = lVar6 + uVar13 * 0x58;
            fVar16 = *(float *)(lVar10 + 0x50);
                    /* try { // try from 00710b08 to 00710b0b has its CatchHandler @ 00710b90 */
            fVar14 = (float)MathUtil::getRandomMinMax
                                      (*(float *)(lVar10 + 0x40),*(float *)(lVar10 + 0x44));
            lVar6 = lVar6 + uVar13 * 0x58;
            fVar17 = *(float *)(lVar6 + 0x38);
                    /* try { // try from 00710b1c to 00710b43 has its CatchHandler @ 00710b94 */
            fVar15 = (float)MathUtil::getRandomMinMax
                                      (*(float *)(lVar6 + 0x48),*(float *)(lVar6 + 0x4c));
            playSound(this,*puVar12,*(uint *)((long)__s + uVar11 * 0x1c + 4),
                      (Vector3 *)((long)__s + uVar11 * 0x1c + 8),
                      *(bool *)((long)__s + uVar11 * 0x1c + 0x18),fVar17 + fVar15,fVar16 + fVar14);
            uVar9 = (ulong)local_8c[0];
            break;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
        } while (uVar13 <= uVar7 && uVar7 - uVar13 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  if (__s != (void *)0x0) {
    operator_delete(__s);
  }
  if (*(long *)(lVar3 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


