/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.6
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGRangeFloat.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGRangeFloat::SWGRangeFloat(QString* json) {
    init();
    this->fromJson(*json);
}

SWGRangeFloat::SWGRangeFloat() {
    min = 0.0f;
    m_min_isSet = false;
    max = 0.0f;
    m_max_isSet = false;
    step = 0.0f;
    m_step_isSet = false;
}

SWGRangeFloat::~SWGRangeFloat() {
    this->cleanup();
}

void
SWGRangeFloat::init() {
    min = 0.0f;
    m_min_isSet = false;
    max = 0.0f;
    m_max_isSet = false;
    step = 0.0f;
    m_step_isSet = false;
}

void
SWGRangeFloat::cleanup() {



}

SWGRangeFloat*
SWGRangeFloat::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGRangeFloat::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&min, pJson["min"], "float", "");
    
    ::SWGSDRangel::setValue(&max, pJson["max"], "float", "");
    
    ::SWGSDRangel::setValue(&step, pJson["step"], "float", "");
    
}

QString
SWGRangeFloat::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGRangeFloat::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_min_isSet){
        obj->insert("min", QJsonValue(min));
    }
    if(m_max_isSet){
        obj->insert("max", QJsonValue(max));
    }
    if(m_step_isSet){
        obj->insert("step", QJsonValue(step));
    }

    return obj;
}

float
SWGRangeFloat::getMin() {
    return min;
}
void
SWGRangeFloat::setMin(float min) {
    this->min = min;
    this->m_min_isSet = true;
}

float
SWGRangeFloat::getMax() {
    return max;
}
void
SWGRangeFloat::setMax(float max) {
    this->max = max;
    this->m_max_isSet = true;
}

float
SWGRangeFloat::getStep() {
    return step;
}
void
SWGRangeFloat::setStep(float step) {
    this->step = step;
    this->m_step_isSet = true;
}


bool
SWGRangeFloat::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_min_isSet){
            isObjectUpdated = true; break;
        }
        if(m_max_isSet){
            isObjectUpdated = true; break;
        }
        if(m_step_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

