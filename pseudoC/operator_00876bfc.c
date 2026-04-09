// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00876bfc
// Size: 412 bytes
// Signature: undefined __thiscall operator=(AnimalAnimationSystemSource * this, AnimalAnimationSystemSource * param_1)


/* AnimalAnimationSystemSource::TEMPNAMEPLACEHOLDERVALUE(AnimalAnimationSystemSource const&) */

AnimalAnimationSystemSource * __thiscall
AnimalAnimationSystemSource::operator=
          (AnimalAnimationSystemSource *this,AnimalAnimationSystemSource *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = 8;
  *(undefined8 *)this = *(undefined8 *)param_1;
  do {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + lVar3),(basic_string *)(param_1 + lVar3));
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x308);
  lVar3 = 0;
  *(undefined4 *)(this + 0x308) = *(undefined4 *)(param_1 + 0x308);
  do {
    *(undefined4 *)(this + lVar3 + 0x310) = *(undefined4 *)(param_1 + lVar3 + 0x310);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + lVar3 + 0x318),(basic_string *)(param_1 + lVar3 + 0x318));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + lVar3 + 0x330),(basic_string *)(param_1 + lVar3 + 0x330));
    uVar2 = *(undefined8 *)(param_1 + lVar3 + 0x348);
    uVar6 = *(undefined8 *)(param_1 + lVar3 + 0x35c);
    uVar5 = *(undefined8 *)(param_1 + lVar3 + 0x354);
    *(undefined8 *)(this + lVar3 + 0x350) = *(undefined8 *)(param_1 + lVar3 + 0x350);
    *(undefined8 *)(this + lVar3 + 0x348) = uVar2;
    *(undefined8 *)(this + lVar3 + 0x35c) = uVar6;
    *(undefined8 *)(this + lVar3 + 0x354) = uVar5;
    if (this != param_1) {
      std::__ndk1::
      vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
      ::assign<AnimalAnimationSystemSource::Trigger*>
                ((vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
                  *)(this + lVar3 + 0x368),*(Trigger **)(param_1 + lVar3 + 0x368),
                 *(Trigger **)(param_1 + lVar3 + 0x370));
    }
    lVar3 = lVar3 + 0x70;
  } while (lVar3 != 0xe00);
  lVar3 = 0x40;
  *(undefined4 *)(this + 0x1110) = *(undefined4 *)(param_1 + 0x1110);
  lVar4 = 0;
  do {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + lVar4 + 0x1118),(basic_string *)(param_1 + lVar4 + 0x1118));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + lVar4 + 0x1130),(basic_string *)(param_1 + lVar4 + 0x1130));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + lVar4 + 0x1148),(basic_string *)(param_1 + lVar4 + 0x1148));
    lVar3 = lVar3 + -1;
    uVar5 = *(undefined8 *)(param_1 + lVar4 + 0x1160);
    uVar2 = *(undefined8 *)(param_1 + lVar4 + 0x1170);
    *(undefined8 *)(this + lVar4 + 0x1168) = *(undefined8 *)(param_1 + lVar4 + 0x1168);
    *(undefined8 *)(this + lVar4 + 0x1160) = uVar5;
    *(undefined8 *)(this + lVar4 + 0x1170) = uVar2;
    lVar4 = lVar4 + 0x60;
  } while (lVar3 != 0);
  lVar3 = 0x2928;
  *(undefined4 *)(this + 0x2918) = *(undefined4 *)(param_1 + 0x2918);
  lVar4 = -0x1400;
  do {
    *(undefined8 *)(this + lVar4 + 0x3d20) = *(undefined8 *)(param_1 + lVar4 + 0x3d20);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + lVar3),(basic_string *)(param_1 + lVar3));
    lVar1 = lVar4 + 0x28;
    lVar3 = lVar3 + 0x28;
    *(undefined8 *)(this + lVar4 + 0x3d40) = *(undefined8 *)(param_1 + lVar4 + 0x3d40);
    lVar4 = lVar1;
  } while (lVar1 != 0);
  return this;
}


