/**
 * APLT
 * < arnaud perrault />
 * Created on 22/02/2017.
 */
var jwt = require('jwt-simple');
var request = require("request");
var md5 = require('md5');
var mailer = require('../method/email');
var auth = require('../method/auth');

var config = require('../../config/db');
var Email = require('../models/email');

module.exports = function (apiRoutes, passport) {
    apiRoutes
        .post('/captcha/verify', verifyCaptcha)

};

function verifyCaptcha(req, res, next) {


    var options = "https://www.google.com/recaptcha/api/siteverify?secret=6LfJQBYUAAAAAJIkpcszGK1vwNxXoPhbN3UGxr_O&response=" + req.body.response;

    request(options, function (error, response, body) {

        if (error)
            res.status(400).send("");

        res.status(200).send("");

        console.log(body);
    });

}
