// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: imbue
// Entry Point: 0075e3bc
// Size: 240 bytes
// Signature: undefined __thiscall imbue(basic_filebuf<char,std::__ndk1::char_traits<char>> * this, locale * param_1)


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::imbue(std::__ndk1::locale
   const&) */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::imbue
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this,locale *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  basic_filebuf<char,std::__ndk1::char_traits<char>> bVar3;
  byte bVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  (**(code **)(*(long *)this + 0x30))();
  plVar5 = (long *)std::__ndk1::locale::use_facet((id *)param_1);
  lVar7 = *plVar5;
  *(long **)(this + 0x80) = plVar5;
  bVar3 = this[0xa2];
  bVar4 = (**(code **)(lVar7 + 0x38))();
  this[0xa2] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)(bVar4 & 1);
  if (bVar3 != (basic_filebuf<char,std::__ndk1::char_traits<char>>)(bVar4 & 1)) {
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    if ((bVar4 & 1) == 0) {
      if ((this[0xa0] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) &&
         (*(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x40) != this + 0x58)) {
        this[0xa1] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0;
        *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x68) =
             *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x40);
        *(ulong *)(this + 0x70) = *(ulong *)(this + 0x60);
        pvVar6 = operator_new__(*(ulong *)(this + 0x60));
        *(void **)(this + 0x40) = pvVar6;
        this[0xa0] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x1;
      }
      else {
        *(ulong *)(this + 0x70) = *(ulong *)(this + 0x60);
        pvVar6 = operator_new__(*(ulong *)(this + 0x60));
        *(void **)(this + 0x68) = pvVar6;
        this[0xa1] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x1;
      }
    }
    else {
      if ((this[0xa0] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) &&
         (*(void **)(this + 0x40) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 0x40));
      }
      uVar1 = *(undefined8 *)(this + 0x68);
      uVar2 = *(undefined8 *)(this + 0x70);
      *(undefined8 *)(this + 0x68) = 0;
      *(undefined8 *)(this + 0x70) = 0;
      bVar3 = this[0xa1];
      this[0xa1] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0;
      *(undefined8 *)(this + 0x40) = uVar1;
      this[0xa0] = bVar3;
      *(undefined8 *)(this + 0x60) = uVar2;
    }
  }
  return;
}


