// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c9a8bc
// Entry Point: 00c9a8bc
// Size: 2360 bytes
// Signature: undefined FUN_00c9a8bc(void)


void FUN_00c9a8bc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined **local_348;
  void *local_340;
  void *local_338;
  undefined **local_328;
  void *local_320;
  void *local_318;
  undefined **local_308;
  void *local_300;
  void *local_2f8;
  undefined **local_2e8;
  void *local_2e0;
  void *local_2d8;
  undefined **local_2c8;
  void *local_2c0;
  void *local_2b8;
  undefined **local_2a8;
  void *local_2a0;
  void *local_298;
  undefined **local_288;
  void *local_280;
  void *local_278;
  undefined **local_268;
  void *local_260;
  void *local_258;
  undefined **local_248;
  void *local_240;
  void *local_238;
  undefined **local_228;
  void *local_220;
  void *local_218;
  undefined **local_208;
  void *local_200;
  void *local_1f8;
  undefined **local_1e8;
  void *local_1e0;
  void *local_1d8;
  undefined **local_1c8;
  void *local_1c0;
  void *local_1b8;
  undefined **local_1a8;
  void *local_1a0;
  void *local_198;
  undefined **local_188;
  void *local_180;
  void *local_178;
  undefined **local_168;
  void *local_160;
  void *local_158;
  undefined **local_148;
  void *local_140;
  void *local_138;
  undefined **local_128;
  void *local_120;
  void *local_118;
  undefined **local_108;
  void *local_100;
  void *local_f8;
  undefined **local_e8;
  void *local_e0;
  void *local_d8;
  undefined **local_c8;
  void *local_c0;
  void *local_b8;
  undefined **local_a8;
  void *local_a0;
  void *local_98;
  undefined **local_88;
  void *local_80;
  void *local_78;
  undefined **local_68;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_0211f730 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0211f730), iVar2 != 0)) {
                    /* try { // try from 00c9a944 to 00c9a94f has its CatchHandler @ 00c9be64 */
    CryptoPP::ASN1::sm2p256v1();
                    /* try { // try from 00c9a950 to 00c9a98f has its CatchHandler @ 00c9be3c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_0211fd70,(OID *)&local_68,
               "FFFFFFFE FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF 00000000 FFFFFFFF FFFFFFFF",
               "FFFFFFFE FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF 00000000 FFFFFFFF FFFFFFFC",
               "28E9FA9E 9D9F5E34 4D5A9E4B CF6509A7 F39789F5 15AB8F92 DDBCBD41 4D940E93",
               "0432C4AE2C 1F198119 5F990446 6A39C994 8FE30BBF F2660BE1 715A4589 334C74C7BC3736A2 F4F6779C 59BDCEE3 6B692153 D0A9877C C62A4740 02DF32E5 2139F0A0"
               ,"FFFFFFFE FFFFFFFF FFFFFFFF FFFFFFFF 7203DF6B 21C6052B 53BBF409 39D54123",1);
                    /* try { // try from 00c9a990 to 00c9a997 has its CatchHandler @ 00c9be14 */
    CryptoPP::ASN1::sm2encrypt_recommendedParameters();
                    /* try { // try from 00c9a998 to 00c9a9d3 has its CatchHandler @ 00c9bdec */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_0211fdc0,(OID *)&local_88,
               "FFFFFFFE FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF 00000000 FFFFFFFF FFFFFFFF",
               "FFFFFFFE FFFFFFFF FFFFFFFF FFFFFFFF FFFFFFFF 00000000 FFFFFFFF FFFFFFFC",
               "28E9FA9E 9D9F5E34 4D5A9E4B CF6509A7 F39789F5 15AB8F92 DDBCBD41 4D940E93",
               "0432C4AE2C 1F198119 5F990446 6A39C994 8FE30BBF F2660BE1 715A4589 334C74C7BC3736A2 F4F6779C 59BDCEE3 6B692153 D0A9877C C62A4740 02DF32E5 2139F0A0"
               ,"FFFFFFFE FFFFFFFF FFFFFFFF FFFFFFFF 7203DF6B 21C6052B 53BBF409 39D54123",1);
                    /* try { // try from 00c9a9d4 to 00c9a9db has its CatchHandler @ 00c9bdc4 */
    CryptoPP::ASN1::secp192r1();
                    /* try { // try from 00c9a9dc to 00c9aa17 has its CatchHandler @ 00c9bd9c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_0211fe10,(OID *)&local_a8,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFF",
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFC",
               "64210519E59C80E70FA7E9AB72243049FEB8DEECC146B9B1",
               "04188DA80EB03090F67CBF20EB43A18800F4FF0AFD82FF101207192B95FFC8DA78631011ED6B24CDD573F977A11E794811"
               ,"FFFFFFFFFFFFFFFFFFFFFFFF99DEF836146BC9B1B4D22831",1);
                    /* try { // try from 00c9aa18 to 00c9aa1f has its CatchHandler @ 00c9bd74 */
    CryptoPP::ASN1::secp256r1();
                    /* try { // try from 00c9aa20 to 00c9aa5b has its CatchHandler @ 00c9bd4c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_0211fe60,(OID *)&local_c8,
               "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF",
               "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFC",
               "5AC635D8AA3A93E7B3EBBD55769886BC651D06B0CC53B0F63BCE3C3E27D2604B",
               "046B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C2964FE342E2FE1A7F9B8EE7EB4A7C0F9E162BCE33576B315ECECBB6406837BF51F5"
               ,"FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC632551",1);
                    /* try { // try from 00c9aa5c to 00c9aa63 has its CatchHandler @ 00c9bd24 */
    CryptoPP::ASN1::brainpoolP160r1();
                    /* try { // try from 00c9aa64 to 00c9aa9f has its CatchHandler @ 00c9bcfc */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_0211feb0,(OID *)&local_e8,
               "E95E4A5F737059DC60DFC7AD95B3D8139515620F","340E7BE2A280EB74E2BE61BADA745D97E8F7C300"
               ,"1E589A8595423412134FAA2DBDEC95C8D8675E58",
               "04BED5AF16EA3F6A4F62938C4631EB5AF7BDBCDBC31667CB477A1A8EC338F94741669C976316DA6321",
               "E95E4A5F737059DC60DF5991D45029409E60FC09",1);
                    /* try { // try from 00c9aaa0 to 00c9aaa7 has its CatchHandler @ 00c9bcd4 */
    CryptoPP::ASN1::brainpoolP192r1();
                    /* try { // try from 00c9aaa8 to 00c9aae3 has its CatchHandler @ 00c9bcac */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_0211ff00,(OID *)&local_108,
               "C302F41D932A36CDA7A3463093D18DB78FCE476DE1A86297",
               "6A91174076B1E0E19C39C031FE8685C1CAE040E5C69A28EF",
               "469A28EF7C28CCA3DC721D044F4496BCCA7EF4146FBF25C9",
               "04C0A0647EAAB6A48753B033C56CB0F0900A2F5C4853375FD614B690866ABD5BB88B5F4828C1490002E6773FA2FA299B8F"
               ,"C302F41D932A36CDA7A3462F9E9E916B5BE8F1029AC4ACC1",1);
                    /* try { // try from 00c9aae4 to 00c9aaeb has its CatchHandler @ 00c9bc84 */
    CryptoPP::ASN1::brainpoolP224r1();
                    /* try { // try from 00c9aaec to 00c9ab27 has its CatchHandler @ 00c9bc5c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_0211ff50,(OID *)&local_128,
               "D7C134AA264366862A18302575D1D787B09F075797DA89F57EC8C0FF",
               "68A5E62CA9CE6C1C299803A6C1530B514E182AD8B0042A59CAD29F43",
               "2580F63CCFE44138870713B1A92369E33E2135D266DBB372386C400B",
               "040D9029AD2C7E5CF4340823B2A87DC68C9E4CE3174C1E6EFDEE12C07D58AA56F772C0726F24C6B89E4ECDAC24354B9E99CAA3F6D3761402CD"
               ,"D7C134AA264366862A18302575D0FB98D116BC4B6DDEBCA3A5A7939F",1);
                    /* try { // try from 00c9ab28 to 00c9ab2f has its CatchHandler @ 00c9bc34 */
    CryptoPP::ASN1::brainpoolP256r1();
                    /* try { // try from 00c9ab30 to 00c9ab6b has its CatchHandler @ 00c9bc0c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_0211ffa0,(OID *)&local_148,
               "A9FB57DBA1EEA9BC3E660A909D838D726E3BF623D52620282013481D1F6E5377",
               "7D5A0975FC2C3057EEF67530417AFFE7FB8055C126DC5C6CE94A4B44F330B5D9",
               "26DC5C6CE94A4B44F330B5D9BBD77CBF958416295CF7E1CE6BCCDC18FF8C07B6",
               "048BD2AEB9CB7E57CB2C4B482FFC81B7AFB9DE27E1E3BD23C23A4453BD9ACE3262547EF835C3DAC4FD97F8461A14611DC9C27745132DED8E545C1D54C72F046997"
               ,"A9FB57DBA1EEA9BC3E660A909D838D718C397AA3B561A6F7901E0E82974856A7",1);
                    /* try { // try from 00c9ab6c to 00c9ab73 has its CatchHandler @ 00c9bbe4 */
    CryptoPP::ASN1::brainpoolP320r1();
                    /* try { // try from 00c9ab74 to 00c9abaf has its CatchHandler @ 00c9bbbc */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_0211fff0,(OID *)&local_168,
               "D35E472036BC4FB7E13C785ED201E065F98FCFA6F6F40DEF4F92B9EC7893EC28FCD412B1F1B32E27",
               "3EE30B568FBAB0F883CCEBD46D3F3BB8A2A73513F5EB79DA66190EB085FFA9F492F375A97D860EB4",
               "520883949DFDBC42D3AD198640688A6FE13F41349554B49ACC31DCCD884539816F5EB4AC8FB1F1A6",
               "0443BD7E9AFB53D8B85289BCC48EE5BFE6F20137D10A087EB6E7871E2A10A599C710AF8D0D39E2061114FDD05545EC1CC8AB4093247F77275E0743FFED117182EAA9C77877AAAC6AC7D35245D1692E8EE1"
               ,"D35E472036BC4FB7E13C785ED201E065F98FCFA5B68F12A32D482EC7EE8658E98691555B44C59311",1
              );
                    /* try { // try from 00c9abb0 to 00c9abb7 has its CatchHandler @ 00c9bb94 */
    CryptoPP::ASN1::brainpoolP384r1();
                    /* try { // try from 00c9abb8 to 00c9abf3 has its CatchHandler @ 00c9bb6c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120040,(OID *)&local_188,
               "8CB91E82A3386D280F5D6F7E50E641DF152F7109ED5456B412B1DA197FB71123ACD3A729901D1A71874700133107EC53"
               ,
               "7BC382C63D8C150C3C72080ACE05AFA0C2BEA28E4FB22787139165EFBA91F90F8AA5814A503AD4EB04A8C7DD22CE2826"
               ,
               "04A8C7DD22CE28268B39B55416F0447C2FB77DE107DCD2A62E880EA53EEB62D57CB4390295DBC9943AB78696FA504C11"
               ,
               "041D1C64F068CF45FFA2A63A81B7C13F6B8847A3E77EF14FE3DB7FCAFE0CBD10E8E826E03436D646AAEF87B2E247D4AF1E8ABE1D7520F9C2A45CB1EB8E95CFD55262B70B29FEEC5864E19C054FF99129280E4646217791811142820341263C5315"
               ,
               "8CB91E82A3386D280F5D6F7E50E641DF152F7109ED5456B31F166E6CAC0425A7CF3AB6AF6B7FC3103B883202E9046565"
               ,1);
                    /* try { // try from 00c9abf4 to 00c9abfb has its CatchHandler @ 00c9bb44 */
    CryptoPP::ASN1::brainpoolP512r1();
                    /* try { // try from 00c9abfc to 00c9ac37 has its CatchHandler @ 00c9bb1c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120090,(OID *)&local_1a8,
               "AADD9DB8DBE9C48B3FD4E6AE33C9FC07CB308DB3B3C9D20ED6639CCA703308717D4D9B009BC66842AECDA12AE6A380E62881FF2F2D82C68528AA6056583A48F3"
               ,
               "7830A3318B603B89E2327145AC234CC594CBDD8D3DF91610A83441CAEA9863BC2DED5D5AA8253AA10A2EF1C98B9AC8B57F1117A72BF2C7B9E7C1AC4D77FC94CA"
               ,
               "3DF91610A83441CAEA9863BC2DED5D5AA8253AA10A2EF1C98B9AC8B57F1117A72BF2C7B9E7C1AC4D77FC94CADC083E67984050B75EBAE5DD2809BD638016F723"
               ,
               "0481AEE4BDD82ED9645A21322E9C4C6A9385ED9F70B5D916C1B43B62EEF4D0098EFF3B1F78E2D0D48D50D1687B93B97D5F7C6D5047406A5E688B352209BCB9F8227DDE385D566332ECC0EABFA9CF7822FDF209F70024A57B1AA000C55B881F8111B2DCDE494A5F485E5BCA4BD88A2763AED1CA2B2FA8F0540678CD1E0F3AD80892"
               ,
               "AADD9DB8DBE9C48B3FD4E6AE33C9FC07CB308DB3B3C9D20ED6639CCA70330870553E5C414CA92619418661197FAC10471DB1D381085DDADDB58796829CA90069"
               ,1);
                    /* try { // try from 00c9ac38 to 00c9ac3f has its CatchHandler @ 00c9baf4 */
    CryptoPP::ASN1::secp112r1();
                    /* try { // try from 00c9ac40 to 00c9ac7b has its CatchHandler @ 00c9bacc */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_021200e0,(OID *)&local_1c8,
               "DB7C2ABF62E35E668076BEAD208B","DB7C2ABF62E35E668076BEAD2088",
               "659EF8BA043916EEDE8911702B22",
               "0409487239995A5EE76B55F9C2F098A89CE5AF8724C0A23E0E0FF77500",
               "DB7C2ABF62E35E7628DFAC6561C5",1);
                    /* try { // try from 00c9ac7c to 00c9ac83 has its CatchHandler @ 00c9baa4 */
    CryptoPP::ASN1::secp112r2();
                    /* try { // try from 00c9ac84 to 00c9acbf has its CatchHandler @ 00c9ba7c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120130,(OID *)&local_1e8,
               "DB7C2ABF62E35E668076BEAD208B","6127C24C05F38A0AAAF65C0EF02C",
               "51DEF1815DB5ED74FCC34C85D709",
               "044BA30AB5E892B4E1649DD0928643ADCD46F5882E3747DEF36E956E97",
               "36DF0AAFD8B8D7597CA10520D04B",4);
                    /* try { // try from 00c9acc0 to 00c9acc7 has its CatchHandler @ 00c9ba54 */
    CryptoPP::ASN1::secp160r1();
                    /* try { // try from 00c9acc8 to 00c9ad03 has its CatchHandler @ 00c9ba2c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120180,(OID *)&local_208,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7FFFFFFF","FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7FFFFFFC"
               ,"1C97BEFC54BD7A8B65ACF89F81D4D4ADC565FA45",
               "044A96B5688EF573284664698968C38BB913CBFC8223A628553168947D59DCC912042351377AC5FB32",
               "0100000000000000000001F4C8F927AED3CA752257",1);
                    /* try { // try from 00c9ad04 to 00c9ad0b has its CatchHandler @ 00c9ba04 */
    CryptoPP::ASN1::secp160k1();
                    /* try { // try from 00c9ad0c to 00c9ad47 has its CatchHandler @ 00c9b9dc */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_021201d0,(OID *)&local_228,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFAC73","0000000000000000000000000000000000000000"
               ,"0000000000000000000000000000000000000007",
               "043B4C382CE37AA192A4019E763036F4F5DD4D7EBB938CF935318FDCED6BC28286531733C3F03C4FEE",
               "0100000000000000000001B8FA16DFAB9ACA16B6B3",1);
                    /* try { // try from 00c9ad48 to 00c9ad4f has its CatchHandler @ 00c9b9b4 */
    CryptoPP::ASN1::secp256k1();
                    /* try { // try from 00c9ad50 to 00c9ad8b has its CatchHandler @ 00c9b98c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120220,(OID *)&local_248,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFC2F",
               "0000000000000000000000000000000000000000000000000000000000000000",
               "0000000000000000000000000000000000000000000000000000000000000007",
               "0479BE667EF9DCBBAC55A06295CE870B07029BFCDB2DCE28D959F2815B16F81798483ADA7726A3C4655DA4FBFC0E1108A8FD17B448A68554199C47D08FFB10D4B8"
               ,"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEBAAEDCE6AF48A03BBFD25E8CD0364141",1);
                    /* try { // try from 00c9ad8c to 00c9ad93 has its CatchHandler @ 00c9b964 */
    CryptoPP::ASN1::secp128r1();
                    /* try { // try from 00c9ad94 to 00c9adcf has its CatchHandler @ 00c9b93c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120270,(OID *)&local_268,
               "FFFFFFFDFFFFFFFFFFFFFFFFFFFFFFFF","FFFFFFFDFFFFFFFFFFFFFFFFFFFFFFFC",
               "E87579C11079F43DD824993C2CEE5ED3",
               "04161FF7528B899B2D0C28607CA52C5B86CF5AC8395BAFEB13C02DA292DDED7A83",
               "FFFFFFFE0000000075A30D1B9038A115",1);
                    /* try { // try from 00c9add0 to 00c9add7 has its CatchHandler @ 00c9b914 */
    CryptoPP::ASN1::secp128r2();
                    /* try { // try from 00c9add8 to 00c9ae13 has its CatchHandler @ 00c9b8ec */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_021202c0,(OID *)&local_288,
               "FFFFFFFDFFFFFFFFFFFFFFFFFFFFFFFF","D6031998D1B3BBFEBF59CC9BBFF9AEE1",
               "5EEEFCA380D02919DC2C6558BB6D8A5D",
               "047B6AA5D85E572983E6FB32A7CDEBC14027B6916A894D3AEE7106FE805FC34B44",
               "3FFFFFFF7FFFFFFFBE0024720613B5A3",4);
                    /* try { // try from 00c9ae14 to 00c9ae1b has its CatchHandler @ 00c9b8c4 */
    CryptoPP::ASN1::secp160r2();
                    /* try { // try from 00c9ae1c to 00c9ae57 has its CatchHandler @ 00c9b89c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120310,(OID *)&local_2a8,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFAC73","FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFAC70"
               ,"B4E134D3FB59EB8BAB57274904664D5AF50388BA",
               "0452DCB034293A117E1F4FF11B30F7199D3144CE6DFEAFFEF2E331F296E071FA0DF9982CFEA7D43F2E",
               "0100000000000000000000351EE786A818F3A1A16B",1);
                    /* try { // try from 00c9ae58 to 00c9ae5f has its CatchHandler @ 00c9b874 */
    CryptoPP::ASN1::secp192k1();
                    /* try { // try from 00c9ae60 to 00c9ae9b has its CatchHandler @ 00c9b59c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120360,(OID *)&local_2c8,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFEE37",
               "000000000000000000000000000000000000000000000000",
               "000000000000000000000000000000000000000000000003",
               "04DB4FF10EC057E9AE26B07D0280B7F4341DA5D1B1EAE06C7D9B2F2F6D9C5628A7844163D015BE86344082AA88D95E2F9D"
               ,"FFFFFFFFFFFFFFFFFFFFFFFE26F2FC170F69466A74DEFD8D",1);
                    /* try { // try from 00c9ae9c to 00c9aea3 has its CatchHandler @ 00c9b574 */
    CryptoPP::ASN1::secp224k1();
                    /* try { // try from 00c9aea4 to 00c9aedf has its CatchHandler @ 00c9b52c */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_021203b0,(OID *)&local_2e8,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFE56D",
               "00000000000000000000000000000000000000000000000000000000",
               "00000000000000000000000000000000000000000000000000000005",
               "04A1455B334DF099DF30FC28A169A467E9E47075A90F7E650EB6B7A45C7E089FED7FBA344282CAFBD6F7E319F7C0B0BD59E2CA4BDB556D61A5"
               ,"010000000000000000000000000001DCE8D2EC6184CAF0A971769FB1F7",1);
                    /* try { // try from 00c9aee0 to 00c9aee7 has its CatchHandler @ 00c9b504 */
    CryptoPP::ASN1::secp224r1();
                    /* try { // try from 00c9aee8 to 00c9af23 has its CatchHandler @ 00c9b4bc */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120400,(OID *)&local_308,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000000000000000000001",
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFFFFFFFFFFFFFFFFFE",
               "B4050A850C04B3ABF54132565044B0B7D7BFD8BA270B39432355FFB4",
               "04B70E0CBD6BB4BF7F321390B94A03C1D356C21122343280D6115C1D21BD376388B5F723FB4C22DFE6CD4375A05A07476444D5819985007E34"
               ,"FFFFFFFFFFFFFFFFFFFFFFFFFFFF16A2E0B8F03E13DD29455C5C2A3D",1);
                    /* try { // try from 00c9af24 to 00c9af2b has its CatchHandler @ 00c9b494 */
    CryptoPP::ASN1::secp384r1();
                    /* try { // try from 00c9af2c to 00c9af67 has its CatchHandler @ 00c9b230 */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_02120450,(OID *)&local_328,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFF"
               ,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFC"
               ,
               "B3312FA7E23EE7E4988E056BE3F82D19181D9C6EFE8141120314088F5013875AC656398D8A2ED19D2A85C8EDD3EC2AEF"
               ,
               "04AA87CA22BE8B05378EB1C71EF320AD746E1D3B628BA79B9859F741E082542A385502F25DBF55296C3A545E3872760AB73617DE4A96262C6F5D9E98BF9292DC29F8F41DBD289A147CE9DA3113B5F0B8C00A60B1CE1D7E819D7A431D7C90EA0E5F"
               ,
               "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC7634D81F4372DDF581A0DB248B0A77AECEC196ACCC52973"
               ,1);
                    /* try { // try from 00c9af68 to 00c9af6f has its CatchHandler @ 00c9b220 */
    CryptoPP::ASN1::secp521r1();
                    /* try { // try from 00c9af70 to 00c9afab has its CatchHandler @ 00c9b1f4 */
    CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
              ((EcRecommendedParameters<CryptoPP::ECP> *)&DAT_021204a0,(OID *)&local_348,
               "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
               ,
               "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC"
               ,
               "0051953EB9618E1C9A1F929A21A0B68540EEA2DA725B99B315F3B8B489918EF109E156193951EC7E937B1652C0BD3BB1BF073573DF883D2C34F1EF451FD46B503F00"
               ,
               "0400C6858E06B70404E9CD9E3ECB662395B4429C648139053FB521F828AF606B4D3DBAA14B5E77EFE75928FE1DC127A2FFA8DE3348B3C1856A429BF97E7E31C2E5BD66011839296A789A3BC0045C8A5FB42C7D1BD998F54449579B446817AFBD17273E662C97EE72995EF42640C550B9013FAD0761353C7086A272C24088BE94769FD16650"
               ,
               "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFA51868783BF2F966B7FCC0148F709A5D03BB5C9B8899C47AEBB6FB71E91386409"
               ,1);
    local_328 = &PTR__OID_00fecd98;
    local_348 = local_328;
    if (local_340 != (void *)0x0) {
      local_338 = local_340;
      operator_delete(local_340);
    }
    if (local_320 != (void *)0x0) {
      local_318 = local_320;
      operator_delete(local_320);
    }
    local_308 = &PTR__OID_00fecd98;
    if (local_300 != (void *)0x0) {
      local_2f8 = local_300;
      operator_delete(local_300);
    }
    local_2e8 = &PTR__OID_00fecd98;
    if (local_2e0 != (void *)0x0) {
      local_2d8 = local_2e0;
      operator_delete(local_2e0);
    }
    local_2c8 = &PTR__OID_00fecd98;
    if (local_2c0 != (void *)0x0) {
      local_2b8 = local_2c0;
      operator_delete(local_2c0);
    }
    local_2a8 = &PTR__OID_00fecd98;
    if (local_2a0 != (void *)0x0) {
      local_298 = local_2a0;
      operator_delete(local_2a0);
    }
    local_288 = &PTR__OID_00fecd98;
    if (local_280 != (void *)0x0) {
      local_278 = local_280;
      operator_delete(local_280);
    }
    local_268 = &PTR__OID_00fecd98;
    if (local_260 != (void *)0x0) {
      local_258 = local_260;
      operator_delete(local_260);
    }
    local_248 = &PTR__OID_00fecd98;
    if (local_240 != (void *)0x0) {
      local_238 = local_240;
      operator_delete(local_240);
    }
    local_228 = &PTR__OID_00fecd98;
    if (local_220 != (void *)0x0) {
      local_218 = local_220;
      operator_delete(local_220);
    }
    local_208 = &PTR__OID_00fecd98;
    if (local_200 != (void *)0x0) {
      local_1f8 = local_200;
      operator_delete(local_200);
    }
    local_1e8 = &PTR__OID_00fecd98;
    if (local_1e0 != (void *)0x0) {
      local_1d8 = local_1e0;
      operator_delete(local_1e0);
    }
    local_1c8 = &PTR__OID_00fecd98;
    if (local_1c0 != (void *)0x0) {
      local_1b8 = local_1c0;
      operator_delete(local_1c0);
    }
    local_1a8 = &PTR__OID_00fecd98;
    if (local_1a0 != (void *)0x0) {
      local_198 = local_1a0;
      operator_delete(local_1a0);
    }
    local_188 = &PTR__OID_00fecd98;
    if (local_180 != (void *)0x0) {
      local_178 = local_180;
      operator_delete(local_180);
    }
    local_168 = &PTR__OID_00fecd98;
    if (local_160 != (void *)0x0) {
      local_158 = local_160;
      operator_delete(local_160);
    }
    local_148 = &PTR__OID_00fecd98;
    if (local_140 != (void *)0x0) {
      local_138 = local_140;
      operator_delete(local_140);
    }
    local_128 = &PTR__OID_00fecd98;
    if (local_120 != (void *)0x0) {
      local_118 = local_120;
      operator_delete(local_120);
    }
    local_108 = &PTR__OID_00fecd98;
    if (local_100 != (void *)0x0) {
      local_f8 = local_100;
      operator_delete(local_100);
    }
    local_e8 = &PTR__OID_00fecd98;
    if (local_e0 != (void *)0x0) {
      local_d8 = local_e0;
      operator_delete(local_e0);
    }
    local_c8 = &PTR__OID_00fecd98;
    if (local_c0 != (void *)0x0) {
      local_b8 = local_c0;
      operator_delete(local_c0);
    }
    local_a8 = &PTR__OID_00fecd98;
    if (local_a0 != (void *)0x0) {
      local_98 = local_a0;
      operator_delete(local_a0);
    }
    local_88 = &PTR__OID_00fecd98;
    if (local_80 != (void *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
    local_68 = &PTR__OID_00fecd98;
    if (local_60 != (void *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
    __cxa_atexit(FUN_00cb7e38,0,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0211f730);
  }
  *param_1 = &DAT_0211fd70;
  *param_2 = &DAT_021204f0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


