// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Array
// Entry Point: 00b277fc
// Size: 368 bytes
// Signature: undefined __thiscall Array(Array * this, Array * param_1)


/* JSONUtil::Array::Array(JSONUtil::Array const&) */

void __thiscall JSONUtil::Array::Array(Array *this,Array *param_1)

{
  Atom **ppAVar1;
  Atom **ppAVar2;
  ulong uVar3;
  void *pvVar4;
  Atom *this_00;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  Atom *pAVar7;
  size_t __n;
  Atom **ppAVar8;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  ppAVar1 = *(Atom ***)param_1;
  ppAVar8 = *(Atom ***)(param_1 + 8);
  uVar3 = (long)ppAVar8 - (long)ppAVar1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* try { // try from 00b27960 to 00b2796b has its CatchHandler @ 00b2796c */
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 00b27838 to 00b2783f has its CatchHandler @ 00b2796c */
    pvVar4 = operator_new(uVar3);
    *(void **)this = pvVar4;
    *(void **)(this + 8) = pvVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + ((long)uVar3 >> 3) * 8);
    ppAVar1 = *(Atom ***)param_1;
    ppAVar8 = *(Atom ***)(param_1 + 8);
  }
  do {
    if (ppAVar1 == ppAVar8) {
      return;
    }
    pAVar7 = *ppAVar1;
                    /* try { // try from 00b2787c to 00b27883 has its CatchHandler @ 00b27984 */
    this_00 = (Atom *)operator_new(0x10);
    *this_00 = (Atom)0x0;
                    /* try { // try from 00b2788c to 00b27893 has its CatchHandler @ 00b27974 */
    Atom::operator=(this_00,pAVar7);
    ppAVar2 = *(Atom ***)(this + 8);
    if (ppAVar2 < *(Atom ***)(this + 0x10)) {
      *ppAVar2 = this_00;
      *(Atom ***)(this + 8) = ppAVar2 + 1;
    }
    else {
      pvVar4 = *(void **)this;
      __n = (long)ppAVar2 - (long)pvVar4;
      uVar3 = ((long)__n >> 3) + 1;
      if (uVar3 >> 0x3d != 0) {
                    /* try { // try from 00b2794c to 00b2795f has its CatchHandler @ 00b27970 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar5 = (long)*(Atom ***)(this + 0x10) - (long)pvVar4;
      uVar6 = (long)uVar5 >> 2;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      if (0x7ffffffffffffff7 < uVar5) {
        uVar3 = 0x1fffffffffffffff;
      }
      if (uVar3 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 00b278e4 to 00b278e7 has its CatchHandler @ 00b27984 */
        __dest = operator_new(uVar3 << 3);
      }
      ppAVar2 = (Atom **)((long)__dest + ((long)__n >> 3) * 8);
      *ppAVar2 = this_00;
      if (0 < (long)__n) {
        memcpy(__dest,pvVar4,__n);
      }
      *(void **)this = __dest;
      *(Atom ***)(this + 8) = ppAVar2 + 1;
      *(void **)(this + 0x10) = (void *)((long)__dest + uVar3 * 8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    ppAVar1 = ppAVar1 + 1;
  } while( true );
}


