/*
  ==============================================================================

    Instruments.h
    Created: 13 Mar 2017 6:12:34pm
    Author:  Anthony

  ==============================================================================
*/

#ifndef INSTRUMENTS_HH_INCLUDED
#define INSTRUMENTS_HH_INCLUDED

/*!
 * \file Instrument.hh
 * \brief File containing the enums for the instruments and their ID
 */

/*! Numero d'identification de l'instrument */
enum	NbInstrument
  {
    ACOUSTICGRANDPIANO		=	1,
    BRIGHTACOUSTICPIANO		=	2,
    ELECTRICGRANDPIANO		=	3,
    HONKYTONKPIANO		=	4,
    ELECTRICPIANO1		=	5,
    ELECTRICPIANO2		=	6,
    HARPSICHORD			=	7,
    CLAVINET			=	8,
    CELESTA			=	9,
    GLOCKENSPIEL		=	10,
    MUSICBOX			=	11,
    VIBRAPHONE			=	12,
    MARIMBA			=	13,
    XYLOPHONE			=	14,
    TUBULARBELLS		=	15,
    DULCIMER			=	16,
    DRAWBARORGAN		=	17,
    PERCUSSIVEORGAN		=	18,
    ROCKORGAN			=	19,
    CHURCHORGAN			=	20,
    REEDORGAN			=	21,
    ACCORDION			=	22,
    HARMONICA			=	23,
    TANGOACCORDION		=	24,
    ACOUSTICGUITARNYLON		=	25,
    ACOUSTICGUITARSTEEL		=	26,
    ELECTRICGUITARJAZZ		=	27,
    ELECTRICGUITARCLEAN		=	28,
    ELECTRICGUITARMUTED		=	29,
    OVERDRIVENGUITAR		=	30,
    DISTORTIONGUITAR		=	31,
    GUITARHARMONICS		=	32,
    ACOUSTICBASS		=	33,
    ELECTRICBASSFINGER		=	34,
    ELECTRICBASSPICK		=	35,
    FRETLESSBASS		=	36,
    SLAPBASS1			=	37,
    SLAPBASS2			=	38,
    SYNTHBASS1			=	39,
    SYNTHBASS2			=	40,
    VIOLIN			=	41,
    VIOLA			=	42,
    CELLO			=	43,
    CONTRABASS			=	44,
    TREMOLOSTRINGS		=	45,
    PIZZICATOSTRINGS		=	46,
    ORCHESTRALHARP		=	47,
    TIMPANI			=	48,
    STRINGENSEMBLE1		=	49,
    STRINGENSEMBLE2		=	50,
    SYNTHSTRINGS1		=	51,
    SYNTHSTRINGS2		=	52,
    CHOIRAAHS			=	53,
    VOICEOOHS			=	54,
    SYNTHCHOIR			=	55,
    ORCHESTRAHIT		=	56,
    TRUMPET			=	57,
    TROMBONE			=	58,
    TUBA			=	59,
    MUTEDTRUMPET		=	60,
    FRENCHHORN			=	61,
    BRASSSECTION		=	62,
    SYNTHBRASS1			=	63,
    SYNTHBRASS2			=	64,
    SOPRANOSAX			=	65,
    ALTOSAX			=	66,
    TENORSAX			=	67,
    BARITONESAX			=	68,
    OBOE			=	69,
    ENGLISHHORN			=	70,
    BASSOON			=	71,
    CLARINET			=	72,
    PICCOLO			=	73,
    FLUTE			=	74,
    RECORDER			=	75,
    PANFLUTE			=	76,
    BLOWNBOTTLE			=	77,
    SHAKUHACHI			=	78,
    WHISTLE			=	79,
    OCARINA			=	80,
    LEAD1SQUARE			=	81,
    LEAD2SAWTOOTH		=	82,
    LEAD3CALLIOPE		=	83,
    LEAD4CHIFF			=	84,
    LEAD5CHARANG		=	85,
    LEAD6VOICE			=	86,
    LEAD7FIFTHS			=	87,
    LEAD8BASS			=	88,
    PAD1NEWAGE			=	89,
    PAD2WARM			=	90,
    PAD3POLYSYNTH		=	91,
    PAD4CHOIR			=	92,
    PAD5BOWED			=	93,
    PAD6METALLIC		=	94,
    PAD7HALO			=	95,
    PAD8SWEEP			=	96,
    FX1RAIN			=	97,
    FX2SOUNDTRACK		=	98,
    FX3CRYSTAL			=	99,
    FXATMOSPHERE		=	100,
    FXBRIGHTNESS		=	101,
    FXGOBLINS			=	102,
    FXECHOES			=	103,
    FXSCIFI			=	104,
    SITAR			=	105,
    BANJO			=	106,
    SHAMISEN			=	107,
    KOTO			=	108,
    KALIMBA			=	109,
    BAGPIPE			=	110,
    FIDDLE			=	111,
    SHANAI			=	112,
    TINKLEBELL			=	113,
    AGOGO			=	114,
    STEELDRUMS			=	115,
    WOODBLOCK			=	116,
    TAIKODRUM			=	117,
    MELODICTOM			=	118,
    SYNTHDRUM			=	119,
    REVERSECYMBAL		=	120,
    GUITARFRETNOISE		=	121,
    BREATHNOISE			=	122,
    SEASHORE			=	123,
    BIRDTWEET			=	124,
    TELEPHONERING		=	125,
    HELICOPTER			=	126,
    APPLAUSE			=	127,
    GUNSHOT			=	128
  };

/*! Numero d'identification de l'instrument de batterie */
enum	Drums
  {
    BASSDRUM2			=	35,
    BASSDRUM1			=	36,
    SIDESTICKRIMSHOT		=	37,
    SNAREDRUMACOUSTICSNARE	=	38,
    HANDCLAP			=	39,
    SNAREDRUMELECTRICSNARE	=	40,
    LOWTOM2			=	41,
    CLOSEDHIHAT			=	42,
    LOWTOM1			=	43,
    PEDALHIHAT			=	44,
    MIDTOM2			=	45,
    OPENHIHAT			=	46,
    MIDTOM1			=	47,
    HIGHTOM2			=	48,
    CRASHCYMBAL1		=	49,
    HIGHTOM1			=	50,
    RIDECYMBAL1			=	51,
    CHINESECYMBAL		=	52,
    RIDEBELL			=	53,
    TAMBOURINE			=	54,
    SPLASHCYMBAL		=	55,
    COWBELL			=	56,
    CRASHCYMBAL2		=	57,
    VIBRASLAP			=	58,
    RIDECYMBAL2			=	59,
    HIGHBONGO			=	60,
    LOWBONGO			=	61,
    MUTEHIGHCONGA		=	62,
    OPENHIGHCONGA		=	63,
    LOWCONGA			=	64,
    HIGHTIMBALE			=	65,
    LOWTIMBALE			=	66,
    HIGHAGOGO			=	67,
    LOWAGOGO			=	68,
    CABASA			=	69,
    MARACAS			=	70,
    SHORTWHISTLE		=	71,
    LONGWHISTLE			=	72,
    SHORTGUIRO			=	73,
    LONGGUIRO			=	74,
    CLAVES			=	75,
    HIGHWOODBLOCK		=	76,
    LOWWOODBLOCK		=	77,
    MUTECUICA			=	78,
    OPENCUICA			=	79,
    MUTETRIANGLE		=	80,
    OPENTRIANGLE		=	81
  };

#endif  // INSTRUMENTS_HH_INCLUDED
